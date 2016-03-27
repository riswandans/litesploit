namespace Litesploit\Intepreter;

class Libs {
        /**
         * Load all libraries
         */

        private static function loader(litesploit) {
        var telnet, curl, url, file, input;
        let telnet = new \Litesploit\Libs\Network\Telnet();
        let curl = new \Litesploit\Libs\Http\Curl();
        let url = new \Litesploit\Libs\Http\Url();
        let file = new \Litesploit\Libs\File();
        let input = new \Litesploit\Libs\Input();
        
        let litesploit = telnet->loader(litesploit);
        let litesploit = curl->loader(litesploit);
        let litesploit = url->loader(litesploit);
        let litesploit = file->loader(litesploit);
        let litesploit = input->loader(litesploit);
        return litesploit;
        }

}