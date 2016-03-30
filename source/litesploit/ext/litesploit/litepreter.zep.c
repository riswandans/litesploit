
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/string.h"
#include "kernel/array.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/fcall.h"
#include "kernel/concat.h"


ZEPHIR_INIT_CLASS(Litesploit_Litepreter) {

	ZEPHIR_REGISTER_CLASS(Litesploit, Litepreter, litesploit, litepreter, litesploit_litepreter_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Litesploit_Litepreter, engine) {

	int ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_2 = NULL;
	zval *_SERVER, *location = NULL, *_0, _1, *_3;

	ZEPHIR_MM_GROW();
	zephir_get_global(&_SERVER, SS("_SERVER") TSRMLS_CC);

	zephir_array_fetch_string(&_0, _SERVER, SL("SCRIPT_NAME"), PH_NOISY | PH_READONLY, "litesploit/litepreter.zep", 8 TSRMLS_CC);
	ZEPHIR_SINIT_VAR(_1);
	ZVAL_STRING(&_1, "/", 0);
	ZEPHIR_INIT_VAR(location);
	zephir_fast_trim(location, _0, &_1, ZEPHIR_TRIM_BOTH TSRMLS_CC);
	if (ZEPHIR_IS_STRING(location, "")) {
		ZEPHIR_INIT_NVAR(location);
		ZVAL_STRING(location, "exploit.lite", 1);
	}
	ZEPHIR_INIT_VAR(_3);
	ZVAL_STRING(_3, "text/html", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_SELF(NULL, "content", &_2, 20, location, _3);
	zephir_check_temp_parameter(_3);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Litesploit_Litepreter, content) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *location, *type_header, *litesploit = NULL, *_0;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &location, &type_header);



	ZEPHIR_INIT_VAR(_0);
	ZEPHIR_CONCAT_SVS(_0, "Content-Type: ", type_header, "; charset=iso-8859-1");
	ZEPHIR_CALL_FUNCTION(NULL, "header", NULL, 21, _0);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&litesploit, "file_get_contents", NULL, 22, location, ZEPHIR_GLOBAL(global_true));
	zephir_check_call_status();
	zend_print_zval(litesploit, 0);
	ZEPHIR_MM_RESTORE();

}

