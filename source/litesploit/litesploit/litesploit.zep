namespace Litesploit;

class Litesploit {

        public static function engine(location)
        {
            self::executecode(location);
        }
        
        private static function executecode(location)
        {
            var litesploit, variables, load, statement;
            let variables = new \Litesploit\Intepreter\Variables();
            let load = new \Litesploit\Intepreter\Load();
            let statement = new \Litesploit\Intepreter\Statement();
            
            let litesploit = file_get_contents(location, true);
            let litesploit = variables->loader(litesploit);
            let litesploit = load->loader(litesploit);
            let litesploit = statement->loader(litesploit);
            eval(litesploit);
        }
}