<?php
    
    function ftp_connects($host, $port) {
        return ftp_connect($host, $port) or die('Could not connect to provided host');
    }
    
    function ftp_logins($handle, $user, $pass) {
        return ftp_login($handle, $user, $pass);
    }
    
    function ftp_closes($handle) {
        ftp_close($handle);
    }
    
?>
    