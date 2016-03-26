namespace Litesploit\Libs;

class File
{

    	private static function loader(litesploit){
    	let litesploit = preg_replace("/file.create\((.*)\)/", "file_create($1);", litesploit);
    	let litesploit = preg_replace("/file.read\((.*)\)/", "file_read($1);", litesploit);
    	let litesploit = preg_replace("/file.extension\((.*)\)/", "file_extension($1);", litesploit);
    	let litesploit = preg_replace("/file.time\((.*)\)/", "file_time($1);", litesploit);
    	let litesploit = preg_replace("/file.copy\((.*)\)/", "file_copy($1);", litesploit);
    	let litesploit = preg_replace("/file.rename\((.*)\)/", "file_rename($1);", litesploit);
    	let litesploit = preg_replace("/file.size\((.*)\)/", "file_size($1);", litesploit);
    	return litesploit;
    	}

}