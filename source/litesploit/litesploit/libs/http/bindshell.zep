namespace Litesploit\Libs\Http;

class Bindshell
{

    	private static function loader(litesploit){
    	let litesploit = preg_replace("/bindshell.connect\((.*)\)/", "bindshell_connect($1);", litesploit);
    	return litesploit;
    	}

}