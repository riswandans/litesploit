namespace Litesploit;

class Litepreter {

        public static function engine()
        {
            var location;
            let location = trim($_SERVER["SCRIPT_NAME"], "/");
            if(location == ""){
                let location = "exploit.lite";
            }
            self::content(location, "text/html");
        }
        
        private static function content(location, type_header) {
		    var litesploit;
		    header("Content-Type: ".type_header."; charset=iso-8859-1");
		    let litesploit = file_get_contents(location, true);
		    echo litesploit;
		}
}