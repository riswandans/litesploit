namespace Litesploit\Intepreter;

class Libs {
        /**
         * Load all libraries
         */

        private static function loader(litesploit) {
        var telnet;
        let telnet = new \Litesploit\Libs\Network\Telnet();
        let litesploit = telnet->loader(litesploit);
        return litesploit;
        }

}