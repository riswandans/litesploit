
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


ZEPHIR_INIT_CLASS(Litesploit_Intepreter_Libs) {

	ZEPHIR_REGISTER_CLASS(Litesploit\\Intepreter, Libs, litesploit, intepreter_libs, litesploit_intepreter_libs_method_entry, 0);

	return SUCCESS;

}

/**
 * Load all libraries
 */
PHP_METHOD(Litesploit_Intepreter_Libs, loader) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *litesploit = NULL, *telnet = NULL, *curl = NULL, *url = NULL, *file = NULL, *input = NULL, *_0 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &litesploit);

	ZEPHIR_SEPARATE_PARAM(litesploit);


	ZEPHIR_INIT_VAR(telnet);
	object_init_ex(telnet, litesploit_libs_network_telnet_ce);
	if (zephir_has_constructor(telnet TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, telnet, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	ZEPHIR_INIT_VAR(curl);
	object_init_ex(curl, litesploit_libs_http_curl_ce);
	if (zephir_has_constructor(curl TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, curl, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	ZEPHIR_INIT_VAR(url);
	object_init_ex(url, litesploit_libs_http_url_ce);
	if (zephir_has_constructor(url TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, url, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	ZEPHIR_INIT_VAR(file);
	object_init_ex(file, litesploit_libs_file_ce);
	if (zephir_has_constructor(file TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, file, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	ZEPHIR_INIT_VAR(input);
	object_init_ex(input, litesploit_libs_input_ce);
	if (zephir_has_constructor(input TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, input, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_METHOD(&_0, telnet, "loader", NULL, 1, litesploit);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _0);
	ZEPHIR_CALL_METHOD(&_0, curl, "loader", NULL, 2, litesploit);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _0);
	ZEPHIR_CALL_METHOD(&_0, url, "loader", NULL, 3, litesploit);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _0);
	ZEPHIR_CALL_METHOD(&_0, file, "loader", NULL, 4, litesploit);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _0);
	ZEPHIR_CALL_METHOD(&_0, input, "loader", NULL, 5, litesploit);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _0);
	RETVAL_ZVAL(litesploit, 1, 0);
	RETURN_MM();

}

