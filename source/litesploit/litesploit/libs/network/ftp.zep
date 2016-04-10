namespace Litesploit\Libs\Network;

class Ftp
{

    	private static function loader(litesploit){
    	let litesploit = preg_replace("/ftp.connect\((.*)\)/", "ftp_connects($1)", litesploit);
    	let litesploit = preg_replace("/ftp.login\((.*)\)/", "ftp_logins($1)", litesploit);
        let litesploit = preg_replace("/ftp.close\((.*)\)/", "ftp_close($1)", litesploit);
    	return litesploit;
    	}

}