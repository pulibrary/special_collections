<?php

/**
 * @file
 * Contains FeedsExHtml.
 */

/**
 * Parses HTML documents with XPath.
 */
class FeedsExHtml extends FeedsExXml {

  /**
   * Whether this version of PHP has the correct saveHTML() method.
   *
   * @var bool
   */
  protected $useSaveHTML;

  /**
   * {@inheritdoc}
   */
  public function __construct($id) {
    parent::__construct($id);
    // DOMDocument::saveHTML() cannot take $node as an argument prior to 5.3.6.
    $this->useSaveHTML = version_compare(PHP_VERSION, '5.3.6', '>=');
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
  protected function getRaw(DOMNode $node) {
    if ($this->useSaveHTML) {
      return $node->ownerDocument->saveHTML($node);
    }
    return $node->ownerDocument->saveXML($node, LIBXML_NOEMPTYTAG);
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
