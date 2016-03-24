namespace Litesploit\Intepreter;

class Variables {
        /**
         * Load all text
         */

        private static function loader(litesploit) {
        let litesploit = self::variable(litesploit);
        let litesploit = self::write(litesploit);
        let litesploit = self::runners(litesploit);
        let litesploit = self::func_function(litesploit);
        let litesploit = self::def_function(litesploit);
        let litesploit = self::class_function(litesploit);
        let litesploit = self::call_function(litesploit);
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
         * Run usage:
         *<code>
         *      run @litesploit->function
         *</code>
         */

        private static function runners(litesploit){
        let litesploit = preg_replace("/run (.*)/", "$1;", litesploit);
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
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit); 
        let litesploit = preg_replace("/@(.*) = (.*)/", "$$1 = $2;", litesploit); 
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit); 
        let litesploit = preg_replace("/@(.*) = (.*)/", "$$1 = $2;", litesploit); 
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit); 
        let litesploit = preg_replace("/@(.*) = (.*)/", "$$1 = $2;", litesploit); 
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit); 
        let litesploit = preg_replace("/@(.*) = (.*)/", "$$1 = $2;", litesploit); 
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit); 
        let litesploit = preg_replace("/@(.*) = (.*)/", "$$1 = $2;", litesploit); 
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit); 
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit); 
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit); 
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit); 
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit); 
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit); 
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit); 
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit); 
        let litesploit = preg_replace("/@(.*)/", "$$1", litesploit);
        let litesploit = preg_replace("/const (.*) = (.*)/", "const $1 = $2;", litesploit);
        return litesploit;
        }
        
        /**
         * Func function usage:
         *<code>
         *      func name()
         *
         *      end
         *</code>
         */
        
        private static function func_function(litesploit) {
        let litesploit = preg_replace("/func (.*)/", "function $1 {", litesploit);
        let litesploit = preg_replace("/func (.*)\((.*)\)/", "function $1($2) {", litesploit);
        let litesploit = preg_replace("/public func (.*)\((.*)\)/", "public function $1($2) {", litesploit);
        let litesploit = preg_replace("/private func (.*)\((.*)\)/", "private function $1($2) {", litesploit);
        let litesploit = preg_replace("/public static func (.*)\((.*)\)/", "public static function $1($2) {", litesploit);
        let litesploit = preg_replace("/private static func (.*)\((.*)\)/", "private static function $1($2) {", litesploit);
        return litesploit;
        }

        /**
         * Def function usage:
         *<code>
         *      def name()
         *
         *      end
         *</code>
         */
        private static function def_function(litesploit) {
        let litesploit = preg_replace("/def (.*)/", "function $1 {", litesploit);
        let litesploit = preg_replace("/def (.*)\((.*)\)/", "function $1($2) {", litesploit);
        let litesploit = preg_replace("/public def (.*)\((.*)\)/", "public function $1($2) {", litesploit);
        let litesploit = preg_replace("/private def (.*)\((.*)\)/", "private function $1($2) {", litesploit);
        let litesploit = preg_replace("/public static def (.*)\((.*)\)/", "public static function $1($2) {", litesploit);
        let litesploit = preg_replace("/private static def (.*)\((.*)\)/", "private static function $1($2) {", litesploit);
        return litesploit;
        }

        /**
         * Class usage:
         *<code>
         *      class Name
         *
         *          def name()
         *
         *          end
         *
         *      end
         *</code>
         */
        private static function class_function(litesploit) {
        let litesploit = preg_replace("/class (.*)/", "class $1 {", litesploit);
        let litesploit = preg_replace("/public (.*) = (.*)/", "public $$1 = $2;", litesploit);
        let litesploit = preg_replace("/private (.*) = (.*)/", "private $$1 = $2;", litesploit);
        let litesploit = preg_replace("/protected (.*) = (.*)/", "protected $$1 = $2;", litesploit);
        let litesploit = preg_replace("/@this->(.*)/", "$this->$1;", litesploit);
        let litesploit = preg_replace("/namespace (.*)/", "namespace $1;", litesploit); // @variable
        return litesploit;
        }

        /**
         * Call usage:
         *<code>
         *  call 
         *</code>
         */
        private static function call_function(litesploit) {
        let litesploit = preg_replace("/call (.*)/", "new \$1", litesploit);
        return litesploit;
        }
}