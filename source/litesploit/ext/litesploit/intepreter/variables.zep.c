
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/memory.h"
#include "kernel/fcall.h"


ZEPHIR_INIT_CLASS(Litesploit_Intepreter_Variables) {

	ZEPHIR_REGISTER_CLASS(Litesploit\\Intepreter, Variables, litesploit, intepreter_variables, litesploit_intepreter_variables_method_entry, 0);

	return SUCCESS;

}

/**
 * Load all text
 */
PHP_METHOD(Litesploit_Intepreter_Variables, loader) {

	int ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_1 = NULL, *_2 = NULL, *_3 = NULL, *_4 = NULL, *_5 = NULL, *_6 = NULL, *_7 = NULL;
	zval *litesploit = NULL, *_0 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &litesploit);

	ZEPHIR_SEPARATE_PARAM(litesploit);


	ZEPHIR_CALL_SELF(&_0, "variable", &_1, 10, litesploit);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _0);
	ZEPHIR_CALL_SELF(&_0, "write", &_2, 11, litesploit);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _0);
	ZEPHIR_CALL_SELF(&_0, "runners", &_3, 12, litesploit);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _0);
	ZEPHIR_CALL_SELF(&_0, "func_function", &_4, 13, litesploit);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _0);
	ZEPHIR_CALL_SELF(&_0, "def_function", &_5, 14, litesploit);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _0);
	ZEPHIR_CALL_SELF(&_0, "class_function", &_6, 15, litesploit);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _0);
	ZEPHIR_CALL_SELF(&_0, "call_function", &_7, 16, litesploit);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _0);
	RETVAL_ZVAL(litesploit, 1, 0);
	RETURN_MM();

}

/**
 * Print usage:
 *<code>
 *      print "Hello World"
 *      write "Hello World"
 *      return "Hello World"
 *</code>
 */
PHP_METHOD(Litesploit_Intepreter_Variables, write) {

	int ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_3 = NULL;
	zval *litesploit = NULL, *_0 = NULL, *_1 = NULL, *_2 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &litesploit);

	ZEPHIR_SEPARATE_PARAM(litesploit);


	ZEPHIR_INIT_VAR(_0);
	ZVAL_STRING(_0, "/write (.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, ";echo $1;", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/print (.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, ";echo $1;", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/return (.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, ";return $1;", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	RETVAL_ZVAL(litesploit, 1, 0);
	RETURN_MM();

}

/**
 * Run usage:
 *<code>
 *      run @litesploit->function
 *</code>
 */
PHP_METHOD(Litesploit_Intepreter_Variables, runners) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *litesploit = NULL, *_0, *_1, *_2 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &litesploit);

	ZEPHIR_SEPARATE_PARAM(litesploit);


	ZEPHIR_INIT_VAR(_0);
	ZVAL_STRING(_0, "/run (.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, "$1;", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", NULL, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	RETVAL_ZVAL(litesploit, 1, 0);
	RETURN_MM();

}

/**
 * Variable usage:
 *<code>
 *      @hello = "Hello World"
 *      print @hello
 *</code>
 */
PHP_METHOD(Litesploit_Intepreter_Variables, variable) {

	int ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_3 = NULL;
	zval *litesploit = NULL, *_0 = NULL, *_1 = NULL, *_2 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &litesploit);

	ZEPHIR_SEPARATE_PARAM(litesploit);


	ZEPHIR_INIT_VAR(_0);
	ZVAL_STRING(_0, "/@(.*) = (.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, "$$1 = $2;", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/@(.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "$$1", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/@(.*) = (.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "$$1 = $2;", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/@(.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "$$1", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/@(.*) = (.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "$$1 = $2;", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/@(.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "$$1", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/@(.*) = (.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "$$1 = $2;", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/@(.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "$$1", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/@(.*) = (.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "$$1 = $2;", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/@(.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "$$1", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/@(.*) = (.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "$$1 = $2;", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/@(.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "$$1", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/@(.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "$$1", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/@(.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "$$1", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/@(.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "$$1", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/@(.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "$$1", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/@(.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "$$1", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/@(.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "$$1", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/@(.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "$$1", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/@(.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "$$1", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/const (.*) = (.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "const $1 = $2;", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	RETVAL_ZVAL(litesploit, 1, 0);
	RETURN_MM();

}

/**
 * Func function usage:
 *<code>
 *      func name()
 *
 *      end
 *</code>
 */
PHP_METHOD(Litesploit_Intepreter_Variables, func_function) {

	int ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_3 = NULL;
	zval *litesploit = NULL, *_0 = NULL, *_1 = NULL, *_2 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &litesploit);

	ZEPHIR_SEPARATE_PARAM(litesploit);


	ZEPHIR_INIT_VAR(_0);
	ZVAL_STRING(_0, "/func (.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, "function $1 {", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/func (.*)\\((.*)\\)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "function $1($2) {", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/public func (.*)\\((.*)\\)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "public function $1($2) {", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/private func (.*)\\((.*)\\)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "private function $1($2) {", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/public static func (.*)\\((.*)\\)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "public static function $1($2) {", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/private static func (.*)\\((.*)\\)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "private static function $1($2) {", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	RETVAL_ZVAL(litesploit, 1, 0);
	RETURN_MM();

}

/**
 * Def function usage:
 *<code>
 *      def name()
 *
 *      end
 *</code>
 */
PHP_METHOD(Litesploit_Intepreter_Variables, def_function) {

	int ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_3 = NULL;
	zval *litesploit = NULL, *_0 = NULL, *_1 = NULL, *_2 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &litesploit);

	ZEPHIR_SEPARATE_PARAM(litesploit);


	ZEPHIR_INIT_VAR(_0);
	ZVAL_STRING(_0, "/def (.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, "function $1 {", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/def (.*)\\((.*)\\)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "function $1($2) {", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/public def (.*)\\((.*)\\)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "public function $1($2) {", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/private def (.*)\\((.*)\\)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "private function $1($2) {", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/public static def (.*)\\((.*)\\)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "public static function $1($2) {", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/private static def (.*)\\((.*)\\)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "private static function $1($2) {", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	RETVAL_ZVAL(litesploit, 1, 0);
	RETURN_MM();

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
PHP_METHOD(Litesploit_Intepreter_Variables, class_function) {

	int ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_3 = NULL;
	zval *litesploit = NULL, *_0 = NULL, *_1 = NULL, *_2 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &litesploit);

	ZEPHIR_SEPARATE_PARAM(litesploit);


	ZEPHIR_INIT_VAR(_0);
	ZVAL_STRING(_0, "/class (.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, "class $1 {", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/public (.*) = (.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "public $$1 = $2;", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/private (.*) = (.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "private $$1 = $2;", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/protected (.*) = (.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "protected $$1 = $2;", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/@this->(.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "$this->$1;", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/namespace (.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "namespace $1;", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	RETVAL_ZVAL(litesploit, 1, 0);
	RETURN_MM();

}

/**
 * Call usage:
 *<code>
 *  call 
 *</code>
 */
PHP_METHOD(Litesploit_Intepreter_Variables, call_function) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *litesploit = NULL, *_0, *_1, *_2 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &litesploit);

	ZEPHIR_SEPARATE_PARAM(litesploit);


	ZEPHIR_INIT_VAR(_0);
	ZVAL_STRING(_0, "/call (.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, "new $1", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", NULL, 5, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	RETVAL_ZVAL(litesploit, 1, 0);
	RETURN_MM();

}

