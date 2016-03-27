namespace Litesploit\Libs;

class Input
{

    	private static function loader(litesploit){
    	let litesploit = preg_replace("/input.start\((.*)\)/", "$input = fopen('php://stdin','r'); $inputs = fgets($input);", litesploit);
    	let litesploit = preg_replace("/input.close\((.*)\)/", "fclose($input);", litesploit);
    	let litesploit = str_replace("input.value", "trim($inputs)", litesploit);
    	return litesploit;
    	}

}