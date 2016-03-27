namespace Litesploit\Libs;

class Input
{

    	private static function loader(litesploit){
    	let litesploit = preg_replace("/input.start\((.*)\)/", "input_start($1);", litesploit);
    	let litesploit = preg_replace("/input.close\((.*)\)/", "input_close($1);", litesploit);
    	let litesploit = str_replace("input.value", "$inputs", litesploit);
    	return litesploit;
    	}

}