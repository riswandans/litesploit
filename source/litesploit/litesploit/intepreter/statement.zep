namespace Litesploit\Intepreter;

class Statement {
    	/**
    	 * Load all statement
    	 */
    
    	private static function loader(litesploit) {
    	let litesploit = self::switch_statement(litesploit);
    	let litesploit = self::while_statement(litesploit);
    	let litesploit = self::if_statement(litesploit);
    	let litesploit = self::for_statement(litesploit);
    	return litesploit;
    	}
    
    	/**
    	 * Switch statement usage:
    	 *<code>
    	 *      switch (statement)
    	 *
    	 *      case "1"
    	 *      print "Hello"
    	 *      break
    	 *
    	 *      end
    	 *</code>
    	 */
    	private static function switch_statement(litesploit){
    	let litesploit = preg_replace("/switch(.*)/", "switch $1 {", litesploit);
    	let litesploit = preg_replace("/case(.*)/", "case $1:", litesploit);
    	let litesploit = preg_replace("/break/", "break;", litesploit);
    	return litesploit;
    	}
    
    	/**
    	 * While statement usage:
    	 *<code>
    	 *      while (statement)
    	 *
    	 *      end
    	 *</code>
    	 */
    	private static function while_statement(litesploit){
    	let litesploit = preg_replace("/while(.*)/", "while $1 {", litesploit);
    	return litesploit;
    	}
    
    	/**
    	 * IF statement usage:
    	 *<code>
    	 *      if (statement)
    	 *		else
    	 *      end
    	 *</code>
    	 */
    	private static function if_statement(litesploit){
    	let litesploit = preg_replace("/if(.*)/", "if $1 {", litesploit);
    	let litesploit = preg_replace("/elseif(.*)/", "} elseif $1 {", litesploit);
    	let litesploit = preg_replace("/else/", "}else{", litesploit);
    	let litesploit = preg_replace("/end/", "}", litesploit);
    	return litesploit;
    	}
    
    	/**
    	 * For & Foreach statement usage:
    	 *<code>
    	 *      for (statement)
    	 *
    	 *      end
    	 *
    	 *		foreach (statement)
    	 *
    	 *		end
    	 *</code>
    	 */
    	private static function for_statement(litesploit){
    	let litesploit = preg_replace("/for\((.*)\)/", "for($1){", litesploit);
    	let litesploit = preg_replace("/for \((.*)\)/", "for($1){", litesploit);
    	let litesploit = preg_replace("/foreach(.*)/", "foreach $1 {", litesploit);
    	return litesploit;
    	}

}