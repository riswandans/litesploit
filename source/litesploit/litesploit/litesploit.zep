namespace Litesploit;

class Litesploit {

        public static function engine(location)
        {
            self::executecode(location);
        }
        
        private static function executecode(location)
        {
            var litesploit, variables;
            let variables = new \Litesploit\Intepreter\Variables();
            
            let litesploit = file_get_contents(location, true);
            let litesploit = variables->loader(litesploit);
            eval(litesploit);
        }
}