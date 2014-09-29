<?php 
session_start(); 
// clear browse history

function download_page($path){
        $ch = curl_init();
        curl_setopt($ch, CURLOPT_URL,$path);
        curl_setopt($ch, CURLOPT_FAILONERROR,1);
        curl_setopt($ch, CURLOPT_FOLLOWLOCATION,1);
        curl_setopt($ch, CURLOPT_RETURNTRANSFER,1);
        curl_setopt($ch, CURLOPT_TIMEOUT, 15);
        $retValue = curl_exec($ch);                      
        curl_close($ch);
        //echo $retValue;
        return $retValue;
}

# LOAD XML FILE
$doc = 'http://library.princeton.edu/services/libraries/libraries.xml';
$XML = new DOMDocument();	
$XML->loadXML( download_page($doc) );

# START XSLT
$xslt = new XSLTProcessor();
$XSL = new DOMDocument();
$XSL->load( 'hours.xsl', LIBXML_NOCDATA);
$xslt->importStylesheet( $XSL );

// Collect thumbnail paths and pass in as params
// $xslt->setParameter('', 'search_params', $_SESSION['current_search']);
#PRINT
print $xslt->transformToXML( $XML );
  
?>