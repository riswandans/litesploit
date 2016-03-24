namespace Litesploit\Libs\Network;

class Telnet
{
    public uSleepTime = 1250000;
    public loginSleepTime = 1000000;
    public connection = null;
    public server = null;
    public port = null;
    public username = null;
    public password = null;
    public loginPrompt;
    public connMessage1;
    public connMessage2;
    const ERROR_0 = "success";
    CONST ERROR_1 = "couldn't open network connection";
    const ERROR_2 = "unknown host";
    const ERROR_3 = "login failed";
    public function __construct(server, port, username = null, password = null)
    {
            let this->server = server;
            let this->port = port;
            let this->username = username;
            let this->password = password;
    }
    public function connect()
    {
        if (this->connection == NULL) {
            
            var errorNumber = 0;
            var errno,errstr,r;
            if (this->connection == fsockopen(this->server, this->port, errno, errstr, 5)) {
                
                if (this->username !== null || this->password !== null) {
                    
                    let r = this->getResponse();
                    let r = explode("\n", r);
                    let this->loginPrompt = r[count(r) - 1];
                    
                    fputs(this->connection, this->username . "\r");
                    self::sleep();
                    
                    fputs(this->connection, this->password . "\r");
                    self::sleep(this->loginSleepTime);
                    
                    let r = this->getResponse();
                    let r = explode("\n", r);
                    if ((r[count(r) - 1] == "") || (this->loginPrompt == r[count(r) - 1])) {
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
    public function disconnect(exit = "exit")
    {
        if (this->connection) {
            if (exit)
            {
                this->execute(exit);
                fclose(this->connection);
                let this->connection = NULL;
            }
        }
    }
    public function execute(cmd)
    {
        var r;
        this->connect();
        fwrite(this->connection, cmd . "\r\n");
        this->sleep();
        let r = this->getResponse();
        return r;
    }
    private function removeNonPrintableCharacters(str)
    {
        return preg_replace("/[\x00-\x09\x0B\x0C\x0E-\x1F\x7F]/", "", str);
    }
    public function getResponse()
    {
        var r,s;
        let r = "";
        do {
            let r .= fread(this->connection, 1000);
            let s = socket_get_status(this->connection);
        } while (s["unread_bytes"]);
        return this->removeNonPrintableCharacters(r);
    }
    public function sleep(sleepTime = null)
    {
        if (sleepTime === null) {
            usleep(this->uSleepTime);
        } else {
            usleep(this->uSleepTime);
        }
    }
    private function throwConnectError(num)
    {
        // throw new \Exception(constant('ERROR_' . num));
    }
}