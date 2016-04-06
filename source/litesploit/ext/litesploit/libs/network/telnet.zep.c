
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/memory.h"
#include "kernel/fcall.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Litesploit_Libs_Network_Telnet) {

	ZEPHIR_REGISTER_CLASS(Litesploit\\Libs\\Network, Telnet, litesploit, libs_network_telnet, litesploit_libs_network_telnet_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Litesploit_Libs_Network_Telnet, loader) {

	int ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_3 = NULL;
	zval *litesploit = NULL, *_0 = NULL, *_1 = NULL, *_2 = NULL, _4, _5, _6, _7, _8, _9;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &litesploit);

	ZEPHIR_SEPARATE_PARAM(litesploit);


	ZEPHIR_INIT_VAR(_0);
	ZVAL_STRING(_0, "/telnet.server\\((.*)\\)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, "$telnetserver = $1;", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 9, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/telnet.port\\((.*)\\)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "$telnetport = $1;", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 9, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/telnet.username\\((.*)\\)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "$telnetusername = $1;", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 9, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/telnet.password\\((.*)\\)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "$telnetpassword = $1;", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 9, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZEPHIR_SINIT_VAR(_4);
	ZVAL_STRING(&_4, "telnet.connect()", 0);
	ZEPHIR_SINIT_VAR(_5);
	ZVAL_STRING(&_5, "$telnet = new \\Telnet\\Client($telnetserver, $telnetport); $telnet->connect();", 0);
	zephir_fast_str_replace(&_0, &_4, &_5, litesploit TSRMLS_CC);
	ZEPHIR_CPY_WRT(litesploit, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/telnet.execute\\((.*)\\)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "$telnet->execute($1)", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 9, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZEPHIR_SINIT_VAR(_6);
	ZVAL_STRING(&_6, "telnet.username", 0);
	ZEPHIR_SINIT_VAR(_7);
	ZVAL_STRING(&_7, "$telnetusername", 0);
	zephir_fast_str_replace(&_0, &_6, &_7, litesploit TSRMLS_CC);
	ZEPHIR_CPY_WRT(litesploit, _0);
	ZEPHIR_INIT_NVAR(_0);
	ZEPHIR_SINIT_VAR(_8);
	ZVAL_STRING(&_8, "telnet.password", 0);
	ZEPHIR_SINIT_VAR(_9);
	ZVAL_STRING(&_9, "$telnetpassword", 0);
	zephir_fast_str_replace(&_0, &_8, &_9, litesploit TSRMLS_CC);
	ZEPHIR_CPY_WRT(litesploit, _0);
	RETVAL_ZVAL(litesploit, 1, 0);
	RETURN_MM();

}

