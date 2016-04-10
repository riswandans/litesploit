
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


ZEPHIR_INIT_CLASS(Litesploit_Libs_Network_Ftp) {

	ZEPHIR_REGISTER_CLASS(Litesploit\\Libs\\Network, Ftp, litesploit, libs_network_ftp, litesploit_libs_network_ftp_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Litesploit_Libs_Network_Ftp, loader) {

	int ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_3 = NULL;
	zval *litesploit = NULL, *_0 = NULL, *_1 = NULL, *_2 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &litesploit);

	ZEPHIR_SEPARATE_PARAM(litesploit);


	ZEPHIR_INIT_VAR(_0);
	ZVAL_STRING(_0, "/ftp.connect\\((.*)\\)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, "ftp_connects($1)", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 10, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/ftp.login\\((.*)\\)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "ftp_logins($1)", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 10, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/ftp.close\\((.*)\\)/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "ftp_close($1)", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, 10, _0, _1, litesploit);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_CPY_WRT(litesploit, _2);
	RETVAL_ZVAL(litesploit, 1, 0);
	RETURN_MM();

}

