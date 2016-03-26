<?php
    function file_create($location, $content) {
    $dir = "/etc/litesploit/tmp/";
    $file = fopen($dir."/".$location,"w");
    fwrite($file, $content);
    fclose($file);
    }
    
    function file_read($location) {
    $dir = "/etc/litesploit/tmp/";
    return file_get_contents($dir."/".$location, true);
    }
    
    function file_extension($location) {
    $dir = "/etc/litesploit/tmp/";
    return pathinfo($dir."/".$location, PATHINFO_EXTENSION);
    }
    
    function file_time($format, $location) {
    $dir = "/etc/litesploit/tmp/";
    return date($format, filemtime($dir."/".$location));
    }
    
    function file_copy($location, $newlocation) {
    $dir = "/etc/litesploit/tmp/";
    if (!copy($dir."/".$location, $dir."/".$newlocation)) {
    	echo "failed to copy...\n";
    }
    }
    
    function file_rename($location, $newname) {
    $dir = "/etc/litesploit/tmp/";
    if (!rename($dir."/".$location, $dir."/".$newname)) {
    	echo "failed to rename...\n";
    }
    }
    
    function file_delete($location) {
    $dir = "/etc/litesploit/tmp/";
    if (!unlink($dir."/".$location)) {
    	echo "failed to delete...\n";
    }
    }
?>