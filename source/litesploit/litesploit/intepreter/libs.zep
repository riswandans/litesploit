namespace Litesploit\Intepreter;

class Libs {
        /**
         * Load all libraries
         */

        private static function loader(litesploit) {
        var telnet, curl;
        let telnet = new \Litesploit\Libs\Network\Telnet();
        let curl = new \Litesploit\Libs\Http\Curl();
        let litesploit = telnet->loader(litesploit);
        let litesploit = curl->loader(litesploit);
        return litesploit;
        }

}