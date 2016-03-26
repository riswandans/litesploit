<?php
    function create($location, $content) {
    $dir = "/etc/litesploit/tmp/";
    $file = fopen($dir."/".$location,"w");
    fwrite($file, $content);
    fclose($file);
    }
    
    function read($location) {
    $dir = "/etc/litesploit/tmp/";
    return file_get_contents($dir."/".$location, true);
    }
    
    function extension($location) {
    $dir = "/etc/litesploit/tmp/";
    return pathinfo($dir."/".$location, PATHINFO_EXTENSION);
    }
    
    function time($format, $location) {
    $dir = "/etc/litesploit/tmp/";
    return date($format, filemtime($dir."/".$location));
    }
    
    function copy($location, $newlocation) {
    $dir = "/etc/litesploit/tmp/";
    if (!copy($dir."/".$location, $dir."/".$newlocation)) {
    	echo "failed to copy...\n";
    }
    }
    
    function rename($location, $newname) {
    $dir = "/etc/litesploit/tmp/";
    if (!rename($dir."/".$location, $dir."/".$newname)) {
    	echo "failed to rename...\n";
    }
    }
    
    function delete($location) {
    $dir = "/etc/litesploit/tmp/";
    if (!unlink($dir."/".$location)) {
    	echo "failed to delete...\n";
    }
    }
?>