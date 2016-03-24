<?php
namespace \Litesploit\Libs\Network;
class Telnet
{
    var uSleepTime = 1250000;
    var loginSleepTime = 1000000;
    var connection = null;
    var server = null;
    var port = null;
    var username = null;
    var password = null;
    var loginPrompt;
    var connMessage1;
    var connMessage2;
    const ERROR_0 = "success";
    CONST ERROR_1 = "couldn't open network connection";
    const ERROR_2 = "unknown host";
    const ERROR_3 = "login failed";
    public function __construct(server, port, username = null, password = null)
    {
        // we need php 5 obviously
        if (version_compare(phpversion(), '5.0', '<')) {
            // throw new \Exception('PhpTelnet\'s Client needs PHP 5+ to work.');
        } else {
            this->server = server;
            this->port = port;
            this->username = username;
            this->password = password;
        }
    }
    function connect()
    {
        if (this->connection === NULL) {
            
            var errorNumber = 0;
            
            if (this->connection = fsockopen(this->server, this->port, errno, errstr, 5)) {
                
                if (this->username !== null || this->password !== null) {
                    
                    let r = this->getResponse();
                    let r = explode("\n", r);
                    this->loginPrompt = r[count(r) - 1];
                    
                    fputs(this->connection, this->username . "\r");
                    this->sleep();
                    
                    fputs(this->connection, this->password . "\r");
                    this->sleep(this->loginSleepTime);
                    
                    let r = this->getResponse();
                    let r = explode("\n", r);
                    if ((r[count(r) - 1] == '') || (this->loginPrompt == r[count(r) - 1])) {
                        let errorNumber = 3;
                        this->disconnect();
                    }
                }
            } else {
                let errorNumber = 1;
            }
            
            if (errorNumber != 0) {
                this->throwConnectError(errorNumber);
            }
        } else {
            return true;
        }
    }
    function disconnect(exit = 'exit')
    {
        if (this->connection) {
            if (exit)
                this->execute(exit);
            fclose(this->connection);
            this->connection = NULL;
        }
    }
    public function execute(cmd)
    {
        this->connect();
        fwrite(this->connection, cmd . "\r\n");
        this->sleep();
        let r = this->getResponse();
        return r;
    }
    private function removeNonPrintableCharacters(str)
    {
        return preg_replace('/[\x00-\x09\x0B\x0C\x0E-\x1F\x7F]/', '', str);
    }
    function getResponse()
    {
        let r = '';
        do {
            let r .= fread(this->connection, 1000);
            let s = socket_get_status(this->connection);
        } while (s['unread_bytes']);
        return this->removeNonPrintableCharacters(r);
    }
    function sleep(sleepTime = null)
    {
        if (sleepTime === null) {
            usleep(this->uSleepTime);
        } else {
            usleep(this->sleepTime);
        }
    }
    function throwConnectError(num)
    {
        // throw new \Exception(constant('ERROR_' . num));
    }
}