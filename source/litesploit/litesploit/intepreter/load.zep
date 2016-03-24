namespace Litesploit\Intepreter;

class Load {
        /**
         * Load all function
         */

        private static function loader(litesploit) {
        let litesploit = self::loads(litesploit);
        return litesploit;
        }

		 /**
		 * Load usage:
		 *<code>
		 *      load "file.p"
		 *		require "file.p"
		 *</code>
		 */

		private static function loads(litesploit) {
		let litesploit = preg_replace("/load (.*)/", "include('/etc/hello/'.$1.'.php');", litesploit);
		return litesploit;
		}

}