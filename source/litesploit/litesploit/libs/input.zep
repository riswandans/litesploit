namespace Litesploit\Libs;

class Input
{

    	private static function loader(litesploit){
    	let litesploit = preg_replace("/input.start\((.*)\)/", "$inputs = fopen('php://stdin','r'); $inputs = fgets($inputs);", litesploit);
    	let litesploit = preg_replace("/input.close\((.*)\)/", "fclose($inputs);", litesploit);
    	let litesploit = str_replace("input.value", "$inputs", litesploit);
    	return litesploit;
    	}

}