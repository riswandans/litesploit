namespace Litesploit\Libs\Http;

class Bindshell
{

    	private static function loader(litesploit){
    	let litesploit = preg_replace("/binshell.connect\((.*)\)/", "bindshell_connect($1);", litesploit);
    	return litesploit;
    	}

}