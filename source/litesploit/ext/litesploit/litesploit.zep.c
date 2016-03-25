
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



	ZEPHIR_CALL_SELF(NULL, "executecode", &_0, 17, location);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Litesploit_Litesploit, executecode) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *location, *litesploit = NULL, *variables = NULL, *load = NULL, *statement = NULL, *libraries = NULL, *_0 = NULL, *_1;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &location);



	ZEPHIR_INIT_VAR(variables);
	object_init_ex(variables, litesploit_intepreter_variables_ce);
	if (zephir_has_constructor(variables TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, variables, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	ZEPHIR_INIT_VAR(load);
	object_init_ex(load, litesploit_intepreter_load_ce);
	if (zephir_has_constructor(load TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, load, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	ZEPHIR_INIT_VAR(statement);
	object_init_ex(statement, litesploit_intepreter_statement_ce);
	if (zephir_has_constructor(statement TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, statement, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	ZEPHIR_INIT_VAR(libraries);
	object_init_ex(libraries, litesploit_intepreter_libs_ce);
	if (zephir_has_constructor(libraries TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, libraries, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	ZEPHIR_CALL_FUNCTION(&litesploit, "file_get_contents", NULL, 18, location, ZEPHIR_GLOBAL(global_true));
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&_0, libraries, "loader", NULL, 19, litesploit);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _0);
	ZEPHIR_CALL_METHOD(&_0, variables, "loader", NULL, 20, litesploit);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _0);
	ZEPHIR_CALL_METHOD(&_0, load, "loader", NULL, 21, litesploit);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _0);
	ZEPHIR_CALL_METHOD(&_0, statement, "loader", NULL, 22, litesploit);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _0);
	ZEPHIR_INIT_VAR(_1);
	zephir_eval_php(litesploit, _1, "/home/ubuntu/workspace/litesploit/source/litesploit/litesploit/litesploit.zep:23" TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

