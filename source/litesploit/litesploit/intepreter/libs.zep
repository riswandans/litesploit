namespace Litesploit\Intepreter;

class Libs {
        /**
         * Load all libraries
         */

        private static function loader(litesploit) {
        var telnet, curl, url;
        let telnet = new \Litesploit\Libs\Network\Telnet();
        let curl = new \Litesploit\Libs\Http\Curl();
        let url = new \Litesploit\Libs\Http\Url();
        let litesploit = telnet->loader(litesploit);
        let litesploit = curl->loader(litesploit);
        let litesploit = url->loader(litesploit);
        return litesploit;
        }

}