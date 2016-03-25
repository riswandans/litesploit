namespace Litesploit\Libs\Http;

class Url
{

    	private static function loader(litesploit){
    	let litesploit = preg_replace("/url.get\((.*)\)/", "url_get($1);", litesploit);
    	let litesploit = preg_replace("/url.post\((.*)\)/", "url_post($1);", litesploit);
    	return litesploit;
    	}

}