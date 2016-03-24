namespace Litesploit;

class Litesploit {

        public static function engine(location)
        {
            self::executecode(location);
        }
        
        private static function executecode(location)
        {
            var litesploit;
            let litesploit = file_get_contents(location, true);
            eval(litesploit);
        }
}