namespace Litesploit\Libs;

class Litepreter
{

    	private static function loader(litesploit){
    	let litesploit = preg_replace("/litepreter.open\((.*)\)/", "litepreter_open($1);", litesploit);
    	return litesploit;
    	}

}