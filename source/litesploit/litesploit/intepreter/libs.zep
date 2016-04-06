namespace Litesploit\Intepreter;

class Libs {
        /**
         * Load all libraries
         */

        private static function loader(litesploit) {
        var telnet, curl, url, file, input, litepreter, bindshell;
        let telnet = new \Litesploit\Libs\Network\Telnet();
        let curl = new \Litesploit\Libs\Http\Curl();
        let url = new \Litesploit\Libs\Http\Url();
        let file = new \Litesploit\Libs\File();
        let input = new \Litesploit\Libs\Input();
        let litepreter = new \Litesploit\Libs\Litepreter();
        let bindshell = new \Litesploit\Libs\Http\Bindshell();
        
        let litesploit = telnet->loader(litesploit);
        let litesploit = curl->loader(litesploit);
        let litesploit = url->loader(litesploit);
        let litesploit = file->loader(litesploit);
        let litesploit = input->loader(litesploit);
        let litesploit = litepreter->loader(litesploit);
        let litesploit = bindshell->loader(litesploit);
        return litesploit;
        }

}