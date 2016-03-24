namespace Litesploit\Intepreter;

class Variables {
        /**
         * Load all text
         */

        private static function loader(litesploit) {
        let litesploit = self::variable(litesploit);
        let litesploit = self::write(litesploit);
        return litesploit;
        }

        /**
         * Print usage:
         *<code>
         *      print "Hello World"
         *      write "Hello World"
         *      return "Hello World"
         *</code>
         */

        private static function write(litesploit){
        let litesploit = preg_replace("/write (.*)/", ";echo $1;", litesploit);
        let litesploit = preg_replace("/print (.*)/", ";echo $1;", litesploit);
        let litesploit = preg_replace("/return (.*)/", ";return $1;", litesploit);
        return litesploit;
        }

        /**
         * Variable usage:
         *<code>
         *      @hello = "Hello World"
         *      print @hello
         *</code>
         */
        private static function variable(litesploit) {
        let litesploit = preg_replace("/@(.*) = (.*)/", "$$1 = $2;", litesploit); 
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit); // @text
        let litesploit = preg_replace("/@(.*) = (.*)/", "$$1 = $2;", litesploit); 
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit); // @text
        let litesploit = preg_replace("/@(.*) = (.*)/", "$$1 = $2;", litesploit); 
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit); // @text
        let litesploit = preg_replace("/@(.*) = (.*)/", "$$1 = $2;", litesploit); 
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit); // @text
        let litesploit = preg_replace("/@(.*) = (.*)/", "$$1 = $2;", litesploit); 
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit); // @text
        let litesploit = preg_replace("/@(.*) = (.*)/", "$$1 = $2;", litesploit); 
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit); // var text
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit); // @variable
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit); // @variable
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit); // @variable
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit); // @variable
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit); // @variable
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit); // @variable
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit); // @variable
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit); // @variable
        let litesploit = preg_replace("/const (.*) = (.*)/", "const $1 = $2;", litesploit);
        return litesploit;
        }
}