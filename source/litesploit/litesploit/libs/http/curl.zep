namespace Litesploit\Libs\Http;

class Curl
{

    	private static function loader(litesploit){
    	let litesploit = preg_replace("/curl.get\((.*)\)/", "curl_get($1);", litesploit);
    	let litesploit = preg_replace("/curl.post\((.*)\)/", "curl_post($1);", litesploit);
    	let litesploit = preg_replace("/curl.download\((.*)\)/", "curl_download($1);", litesploit);
    	return litesploit;
    	}

}