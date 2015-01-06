<?php

/**
 * @file
 * Contains FeedsExQueryPathHtml.
 */

/**
 * Parses HTML documents with QueryPath.
 *
 * @todo Make convertEncoding() into a helper function so that they aren't \
 *   copied in 2 places.
 */
class FeedsExQueryPathHtml extends FeedsExQueryPathXml {

  /**
   * {@inheritdoc}
   */
  protected function setUp(FeedsSource $source, FeedsFetcherResult $fetcher_result) {
    // Change some parser settings.
    $this->queryPathOptions['use_parser'] = 'html';
  }

  /**
   * {@inheritdoc}
   */
  protected function getRawValue(QueryPath $node) {
    return $node->html();
  }

  /**
   * {@inheritdoc}
   */
  protected function convertEncoding($data, $encoding = 'UTF-8') {
    // Check for an encoding declaration.
    $matches = FALSE;
    if (preg_match('/<meta[^>]+charset\s*=\s*["\']?([\w-]+)\b/i', $data, $matches)) {
      $encoding = $matches[1];
    }
    elseif ($detected = parent::detectEncoding($data)) {
      $encoding = $detected;
    }

    // Unsupported encodings are converted here into UTF-8.
    $php_supported = array('utf-8', 'us-ascii', 'ascii');
    if (in_array(strtolower($encoding), $php_supported)) {
      return $data;
    }

    $data = parent::convertEncoding($data, $encoding);
    if ($matches) {
      $data = preg_replace('/(<meta[^>]+charset\s*=\s*["\']?)([\w-]+)\b/i', '$1UTF-8', $data, 1);
    }

    return $data;
  }

  /**
   * {@inheritdoc}
   */
  protected function prepareDocument(FeedsSource $source, FeedsFetcherResult $fetcher_result) {
    $raw = $fetcher_result->getRaw();
    if (!strlen(trim($raw))) {
      throw new FeedsExEmptyException();
    }
    $raw = $this->convertEncoding($raw);
    if ($this->config['use_tidy'] && extension_loaded('tidy')) {
      $raw = tidy_repair_string($raw, $this->getTidyConfig(), 'utf8');
    }
    return FeedsExXmlUtility::createHtmlDocument($raw);
  }

  /**
   * {@inheritdoc}
   */
  protected function getTidyConfig() {
    return array(
      'merge-divs' => FALSE,
      'merge-spans' => FALSE,
      'join-styles' => FALSE,
      'drop-empty-paras' => FALSE,
      'wrap' => 0,
      'tidy-mark' => FALSE,
      'escape-cdata' => TRUE,
      'word-2000' => TRUE,
    );
  }

}
