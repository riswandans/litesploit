<?php
    function file_create($location, $content) {
    $file = fopen($location,"w");
    fwrite($file, $content);
    fclose($file);
    }
    
    function file_read($location) {
    return file_get_contents($location, true);
    }
    
    function file_extension($location) {
    return pathinfo($location, PATHINFO_EXTENSION);
    }
    
    function file_time($format, $location) {
    return date($format, filemtime($location));
    }
    
    function file_copy($location, $newlocation) {
    if (!copy($location, $newlocation)) {
    	echo "failed to copy...\n";
    }
    }
    
    function file_rename($location, $newname) {
    if (!rename($location, $newname)) {
    	echo "failed to rename...\n";
    }
    }
    
    function file_delete($location) {
    if (!unlink($location)) {
    	echo "failed to delete...\n";
    }
    }
?>