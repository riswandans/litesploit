namespace Litesploit\Libs\Network;

class Telnet 
{

    	private static function loader(litesploit){
    	let litesploit = preg_replace("/telnet.server\((.*)\)/", "$telnetserver = $1;", litesploit);
    	let litesploit = preg_replace("/telnet.port\((.*)\)/", "$telnetport = $1;", litesploit);
        let litesploit = preg_replace("/telnet.username\((.*)\)/", "$telnetusername = $1;", litesploit);
    	let litesploit = preg_replace("/telnet.password\((.*)\)/", "$telnetpassword = $1;", litesploit);
    	let litesploit = str_replace("telnet.connect()", "$telnet = new \Telnet\Client($telnetserver, $telnetport); $telnet->connect();", litesploit);
    	let litesploit = preg_replace("/telnet.execute\((.*)\)/", "$telnet->execute($1)", litesploit);
    	let litesploit = str_replace("telnet.username", "$telnetusername", litesploit);
    	let litesploit = str_replace("telnet.password", "$telnetpassword", litesploit);
    	return litesploit;
    	}

}