
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
#include "kernel/fcall.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Litesploit_Litesploit) {

	ZEPHIR_REGISTER_CLASS(Litesploit, Litesploit, litesploit, litesploit, litesploit_litesploit_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Litesploit_Litesploit, engine) {

	int ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL;
	zval *location;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &location);



	ZEPHIR_CALL_SELF(NULL, "executecode", &_0, 9, location);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Litesploit_Litesploit, executecode) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *location, *litesploit = NULL, *_0;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &location);



	ZEPHIR_CALL_FUNCTION(&litesploit, "file_get_contents", NULL, 10, location, ZEPHIR_GLOBAL(global_true));
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(_0);
	zephir_eval_php(litesploit, _0, "/home/ubuntu/workspace/litesploit/source/litesploit/litesploit/litesploit.zep:14" TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

