
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


ZEPHIR_INIT_CLASS(Litesploit_Libs_Http_Curl) {

	ZEPHIR_REGISTER_CLASS(Litesploit\\Libs\\Http, Curl, litesploit, libs_http_curl, litesploit_libs_http_curl_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Litesploit_Libs_Http_Curl, loader) {

	int ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_3 = NULL;
	zval *litesploit = NULL, *_0 = NULL, *_1 = NULL, *_2 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &litesploit);

	ZEPHIR_SEPARATE_PARAM(litesploit);


	ZEPHIR_INIT_VAR(_0);
	ZVAL_STRING(_0, "/curl.get\\((.*)\\)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, "curl_get($1);", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 7, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/curl.post\\((.*)\\)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "curl_post($1);", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 7, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/curl.download\\((.*)\\)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "curl_download($1);", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 7, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	RETVAL_ZVAL(litesploit, 1, 0);
	RETURN_MM();

}

