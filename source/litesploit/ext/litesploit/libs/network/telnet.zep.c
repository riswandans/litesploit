
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
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/fcall.h"
#include "kernel/string.h"
#include "kernel/array.h"
#include "kernel/concat.h"
#include "kernel/file.h"


ZEPHIR_INIT_CLASS(Litesploit_Libs_Network_Telnet) {

	ZEPHIR_REGISTER_CLASS(Litesploit\\Libs\\Network, Telnet, litesploit, libs_network_telnet, litesploit_libs_network_telnet_method_entry, 0);

	zend_declare_property_long(litesploit_libs_network_telnet_ce, SL("uSleepTime"), 1250000, ZEND_ACC_PUBLIC TSRMLS_CC);

	zend_declare_property_long(litesploit_libs_network_telnet_ce, SL("loginSleepTime"), 1000000, ZEND_ACC_PUBLIC TSRMLS_CC);

	zend_declare_property_null(litesploit_libs_network_telnet_ce, SL("connection"), ZEND_ACC_PUBLIC TSRMLS_CC);

	zend_declare_property_null(litesploit_libs_network_telnet_ce, SL("server"), ZEND_ACC_PUBLIC TSRMLS_CC);

	zend_declare_property_null(litesploit_libs_network_telnet_ce, SL("port"), ZEND_ACC_PUBLIC TSRMLS_CC);

	zend_declare_property_null(litesploit_libs_network_telnet_ce, SL("username"), ZEND_ACC_PUBLIC TSRMLS_CC);

	zend_declare_property_null(litesploit_libs_network_telnet_ce, SL("password"), ZEND_ACC_PUBLIC TSRMLS_CC);

	zend_declare_property_null(litesploit_libs_network_telnet_ce, SL("loginPrompt"), ZEND_ACC_PUBLIC TSRMLS_CC);

	zend_declare_property_null(litesploit_libs_network_telnet_ce, SL("connMessage1"), ZEND_ACC_PUBLIC TSRMLS_CC);

	zend_declare_property_null(litesploit_libs_network_telnet_ce, SL("connMessage2"), ZEND_ACC_PUBLIC TSRMLS_CC);

	zend_declare_class_constant_string(litesploit_libs_network_telnet_ce, SL("ERROR_0"), "success" TSRMLS_CC);

	zend_declare_class_constant_string(litesploit_libs_network_telnet_ce, SL("ERROR_1"), "couldn't open network connection" TSRMLS_CC);

	zend_declare_class_constant_string(litesploit_libs_network_telnet_ce, SL("ERROR_2"), "unknown host" TSRMLS_CC);

	zend_declare_class_constant_string(litesploit_libs_network_telnet_ce, SL("ERROR_3"), "login failed" TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Litesploit_Libs_Network_Telnet, __construct) {

	zval *server, *port, *username = NULL, *password = NULL;

	zephir_fetch_params(0, 2, 2, &server, &port, &username, &password);

	if (!username) {
		username = ZEPHIR_GLOBAL(global_null);
	}
	if (!password) {
		password = ZEPHIR_GLOBAL(global_null);
	}


	zephir_update_property_this(this_ptr, SL("server"), server TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("port"), port TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("username"), username TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("password"), password TSRMLS_CC);

}

PHP_METHOD(Litesploit_Libs_Network_Telnet, connect) {

	zend_bool _7$$4, _21$$5;
	zval *_0, *errno$$3 = NULL, *errstr$$3 = NULL, *r$$3 = NULL, *_1$$3, *_2$$3, *_3$$3, *_4$$3, *_5$$3 = NULL, *_6$$4, *_8$$4, *_10$$5 = NULL, *_11$$5, *_12$$5, *_13$$5, *_14$$5, *_16$$5, *_17$$5, *_18$$5, *_19$$5, *_20$$5, *_22$$5, *_23$$5, *_24$$8;
	zephir_fcall_cache_entry *_9 = NULL, *_15 = NULL;
	int ZEPHIR_LAST_CALL_STATUS, errorNumber$$3;

	ZEPHIR_MM_GROW();

	_0 = zephir_fetch_nproperty_this(this_ptr, SL("connection"), PH_NOISY_CC);
	if (Z_TYPE_P(_0) == IS_NULL) {
		errorNumber$$3 = 0;
		_1$$3 = zephir_fetch_nproperty_this(this_ptr, SL("connection"), PH_NOISY_CC);
		_2$$3 = zephir_fetch_nproperty_this(this_ptr, SL("server"), PH_NOISY_CC);
		_3$$3 = zephir_fetch_nproperty_this(this_ptr, SL("port"), PH_NOISY_CC);
		ZEPHIR_INIT_VAR(_4$$3);
		ZVAL_LONG(_4$$3, 5);
		ZEPHIR_MAKE_REF(errno$$3);
		ZEPHIR_CALL_FUNCTION(&_5$$3, "fsockopen", NULL, 1, _2$$3, _3$$3, errno$$3, errstr$$3, _4$$3);
		ZEPHIR_UNREF(errno$$3);
		zephir_check_call_status();
		if (ZEPHIR_IS_EQUAL(_1$$3, _5$$3)) {
			_6$$4 = zephir_fetch_nproperty_this(this_ptr, SL("username"), PH_NOISY_CC);
			_7$$4 = Z_TYPE_P(_6$$4) != IS_NULL;
			if (!(_7$$4)) {
				_8$$4 = zephir_fetch_nproperty_this(this_ptr, SL("password"), PH_NOISY_CC);
				_7$$4 = Z_TYPE_P(_8$$4) != IS_NULL;
			}
			if (_7$$4) {
				ZEPHIR_CALL_METHOD(&r$$3, this_ptr, "getresponse", &_9, 0);
				zephir_check_call_status();
				ZEPHIR_INIT_VAR(_10$$5);
				zephir_fast_explode_str(_10$$5, SL("\n"), r$$3, LONG_MAX TSRMLS_CC);
				ZEPHIR_CPY_WRT(r$$3, _10$$5);
				zephir_array_fetch_long(&_11$$5, r$$3, (zephir_fast_count_int(r$$3 TSRMLS_CC) - 1), PH_NOISY | PH_READONLY, "litesploit/libs/network/telnet.zep", 38 TSRMLS_CC);
				zephir_update_property_this(this_ptr, SL("loginPrompt"), _11$$5 TSRMLS_CC);
				_12$$5 = zephir_fetch_nproperty_this(this_ptr, SL("connection"), PH_NOISY_CC);
				_13$$5 = zephir_fetch_nproperty_this(this_ptr, SL("username"), PH_NOISY_CC);
				ZEPHIR_INIT_VAR(_14$$5);
				ZEPHIR_CONCAT_VS(_14$$5, _13$$5, "\r");
				ZEPHIR_CALL_FUNCTION(NULL, "fputs", &_15, 2, _12$$5, _14$$5);
				zephir_check_call_status();
				ZEPHIR_CALL_SELF(NULL, "sleep", NULL, 0);
				zephir_check_call_status();
				_16$$5 = zephir_fetch_nproperty_this(this_ptr, SL("connection"), PH_NOISY_CC);
				_17$$5 = zephir_fetch_nproperty_this(this_ptr, SL("password"), PH_NOISY_CC);
				ZEPHIR_INIT_VAR(_18$$5);
				ZEPHIR_CONCAT_VS(_18$$5, _17$$5, "\r");
				ZEPHIR_CALL_FUNCTION(NULL, "fputs", &_15, 2, _16$$5, _18$$5);
				zephir_check_call_status();
				_19$$5 = zephir_fetch_nproperty_this(this_ptr, SL("loginSleepTime"), PH_NOISY_CC);
				ZEPHIR_CALL_SELF(NULL, "sleep", NULL, 0, _19$$5);
				zephir_check_call_status();
				ZEPHIR_CALL_METHOD(&r$$3, this_ptr, "getresponse", &_9, 0);
				zephir_check_call_status();
				ZEPHIR_INIT_NVAR(_10$$5);
				zephir_fast_explode_str(_10$$5, SL("\n"), r$$3, LONG_MAX TSRMLS_CC);
				ZEPHIR_CPY_WRT(r$$3, _10$$5);
				zephir_array_fetch_long(&_20$$5, r$$3, (zephir_fast_count_int(r$$3 TSRMLS_CC) - 1), PH_NOISY | PH_READONLY, "litesploit/libs/network/telnet.zep", 48 TSRMLS_CC);
				_21$$5 = (ZEPHIR_IS_STRING(_20$$5, ""));
				if (!(_21$$5)) {
					_22$$5 = zephir_fetch_nproperty_this(this_ptr, SL("loginPrompt"), PH_NOISY_CC);
					zephir_array_fetch_long(&_23$$5, r$$3, (zephir_fast_count_int(r$$3 TSRMLS_CC) - 1), PH_NOISY | PH_READONLY, "litesploit/libs/network/telnet.zep", 48 TSRMLS_CC);
					_21$$5 = ZEPHIR_IS_EQUAL(_22$$5, _23$$5);
				}
				if (_21$$5) {
					errorNumber$$3 = 3;
					ZEPHIR_CALL_METHOD(NULL, this_ptr, "disconnect", NULL, 0);
					zephir_check_call_status();
				}
			}
		} else {
			errorNumber$$3 = 1;
		}
		if (errorNumber$$3 != 0) {
			ZEPHIR_INIT_VAR(_24$$8);
			ZVAL_LONG(_24$$8, errorNumber$$3);
			ZEPHIR_CALL_METHOD(NULL, this_ptr, "throwconnecterror", NULL, 3, _24$$8);
			zephir_check_call_status();
		}
	} else {
		RETURN_MM_BOOL(1);
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Litesploit_Libs_Network_Telnet, disconnect) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *exit = NULL, *_0, *_1$$4;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &exit);

	if (!exit) {
		ZEPHIR_INIT_VAR(exit);
		ZVAL_STRING(exit, "exit", 1);
	}


	_0 = zephir_fetch_nproperty_this(this_ptr, SL("connection"), PH_NOISY_CC);
	if (zephir_is_true(_0)) {
		if (zephir_is_true(exit)) {
			ZEPHIR_CALL_METHOD(NULL, this_ptr, "execute", NULL, 0, exit);
			zephir_check_call_status();
			_1$$4 = zephir_fetch_nproperty_this(this_ptr, SL("connection"), PH_NOISY_CC);
			zephir_fclose(_1$$4 TSRMLS_CC);
			zephir_update_property_this(this_ptr, SL("connection"), ZEPHIR_GLOBAL(global_null) TSRMLS_CC);
		}
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Litesploit_Libs_Network_Telnet, execute) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *cmd, *r = NULL, *_0, *_1;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &cmd);



	ZEPHIR_CALL_METHOD(NULL, this_ptr, "connect", NULL, 0);
	zephir_check_call_status();
	_0 = zephir_fetch_nproperty_this(this_ptr, SL("connection"), PH_NOISY_CC);
	ZEPHIR_INIT_VAR(_1);
	ZEPHIR_CONCAT_VS(_1, cmd, "\r\n");
	zephir_fwrite(NULL, _0, _1 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "sleep", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&r, this_ptr, "getresponse", NULL, 0);
	zephir_check_call_status();
	RETURN_CCTOR(r);

}

PHP_METHOD(Litesploit_Libs_Network_Telnet, removeNonPrintableCharacters) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *str, *_0, *_1;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str);



	ZEPHIR_INIT_VAR(_0);
	ZVAL_STRING(_0, "/[\\x00-\\x09\\x0B\\x0C\\x0E-\\x1F\\x7F]/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, "", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_RETURN_CALL_FUNCTION("preg_replace", NULL, 4, _0, _1, str);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Litesploit_Libs_Network_Telnet, getResponse) {

	zval *r = NULL, *s = NULL, *_6, *_0$$3, _1$$3 = zval_used_for_init, *_2$$3 = NULL, *_4$$3;
	int ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_3 = NULL, *_5 = NULL;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(r);
	ZVAL_STRING(r, "", 1);
	do {
		_0$$3 = zephir_fetch_nproperty_this(this_ptr, SL("connection"), PH_NOISY_CC);
		ZEPHIR_SINIT_NVAR(_1$$3);
		ZVAL_LONG(&_1$$3, 1000);
		ZEPHIR_CALL_FUNCTION(&_2$$3, "fread", &_3, 5, _0$$3, &_1$$3);
		zephir_check_call_status();
		zephir_concat_self(&r, _2$$3 TSRMLS_CC);
		_4$$3 = zephir_fetch_nproperty_this(this_ptr, SL("connection"), PH_NOISY_CC);
		ZEPHIR_CALL_FUNCTION(&s, "socket_get_status", &_5, 6, _4$$3);
		zephir_check_call_status();
		zephir_array_fetch_string(&_6, s, SL("unread_bytes"), PH_NOISY | PH_READONLY, "litesploit/libs/network/telnet.zep", 95 TSRMLS_CC);
	} while (zephir_is_true(_6));
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "removenonprintablecharacters", NULL, 7, r);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Litesploit_Libs_Network_Telnet, sleep) {

	int ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_1 = NULL;
	zval *sleepTime = NULL, *_0$$3, *_2$$4;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &sleepTime);

	if (!sleepTime) {
		sleepTime = ZEPHIR_GLOBAL(global_null);
	}


	if (Z_TYPE_P(sleepTime) == IS_NULL) {
		_0$$3 = zephir_fetch_nproperty_this(this_ptr, SL("uSleepTime"), PH_NOISY_CC);
		ZEPHIR_CALL_FUNCTION(NULL, "usleep", &_1, 8, _0$$3);
		zephir_check_call_status();
	} else {
		_2$$4 = zephir_fetch_nproperty_this(this_ptr, SL("uSleepTime"), PH_NOISY_CC);
		ZEPHIR_CALL_FUNCTION(NULL, "usleep", &_1, 8, _2$$4);
		zephir_check_call_status();
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Litesploit_Libs_Network_Telnet, throwConnectError) {

	zval *num;

	zephir_fetch_params(0, 1, 0, &num);




}

