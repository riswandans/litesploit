
extern zend_class_entry *litesploit_intepreter_statement_ce;

ZEPHIR_INIT_CLASS(Litesploit_Intepreter_Statement);

PHP_METHOD(Litesploit_Intepreter_Statement, loader);
PHP_METHOD(Litesploit_Intepreter_Statement, switch_statement);
PHP_METHOD(Litesploit_Intepreter_Statement, while_statement);
PHP_METHOD(Litesploit_Intepreter_Statement, if_statement);
PHP_METHOD(Litesploit_Intepreter_Statement, for_statement);

ZEND_BEGIN_ARG_INFO_EX(arginfo_litesploit_intepreter_statement_loader, 0, 0, 1)
	ZEND_ARG_INFO(0, litesploit)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_litesploit_intepreter_statement_switch_statement, 0, 0, 1)
	ZEND_ARG_INFO(0, litesploit)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_litesploit_intepreter_statement_while_statement, 0, 0, 1)
	ZEND_ARG_INFO(0, litesploit)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_litesploit_intepreter_statement_if_statement, 0, 0, 1)
	ZEND_ARG_INFO(0, litesploit)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_litesploit_intepreter_statement_for_statement, 0, 0, 1)
	ZEND_ARG_INFO(0, litesploit)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(litesploit_intepreter_statement_method_entry) {
	PHP_ME(Litesploit_Intepreter_Statement, loader, arginfo_litesploit_intepreter_statement_loader, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_ME(Litesploit_Intepreter_Statement, switch_statement, arginfo_litesploit_intepreter_statement_switch_statement, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_ME(Litesploit_Intepreter_Statement, while_statement, arginfo_litesploit_intepreter_statement_while_statement, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_ME(Litesploit_Intepreter_Statement, if_statement, arginfo_litesploit_intepreter_statement_if_statement, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_ME(Litesploit_Intepreter_Statement, for_statement, arginfo_litesploit_intepreter_statement_for_statement, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_FE_END
};
