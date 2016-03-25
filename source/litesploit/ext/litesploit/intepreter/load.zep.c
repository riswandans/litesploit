
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


ZEPHIR_INIT_CLASS(Litesploit_Intepreter_Load) {

	ZEPHIR_REGISTER_CLASS(Litesploit\\Intepreter, Load, litesploit, intepreter_load, litesploit_intepreter_load_method_entry, 0);

	return SUCCESS;

}

/**
 * Load all function
 */
PHP_METHOD(Litesploit_Intepreter_Load, loader) {

	int ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_1 = NULL;
	zval *litesploit = NULL, *_0 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &litesploit);

	ZEPHIR_SEPARATE_PARAM(litesploit);


	ZEPHIR_CALL_SELF(&_0, "loads", &_1, 3, litesploit);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _0);
	RETVAL_ZVAL(litesploit, 1, 0);
	RETURN_MM();

}

/**
 * Load usage:
 *<code>
 *      load "file.p"
 *		require "file.p"
 *</code>
 */
PHP_METHOD(Litesploit_Intepreter_Load, loads) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *litesploit = NULL, *_0, *_1, *_2 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &litesploit);

	ZEPHIR_SEPARATE_PARAM(litesploit);


	ZEPHIR_INIT_VAR(_0);
	ZVAL_STRING(_0, "/load (.*)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, "include('/etc/litesploit/libs/'.$1.'.php');", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", NULL, 4, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	RETVAL_ZVAL(litesploit, 1, 0);
	RETURN_MM();

}

