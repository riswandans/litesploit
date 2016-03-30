<?php

    function litepreter_open($port, $location){
    shell_exec('php -S ".0.0.0.0:$port." ".$location');
    }

?>