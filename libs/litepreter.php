<?php

    function litepreter_open($ip,$port, $location){
    echo "[*] Litepreter running\n";
    echo "[*] Running on $ip:$port \n";
    echo "[*] Type Ctrl+C for stop\n";
    exec("cd $location && php -S $ip:$port /etc/litesploit/app/litepreter");
    }

?>