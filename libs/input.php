<?php

    function input_start() {
    $inputs = fopen("php://stdin","r");
    $inputs = fgets($inputs);
    }
    
    function input_close() {
    fclose($inputs);
    }
    
?>