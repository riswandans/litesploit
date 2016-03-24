
extern zend_class_entry *litesploit_intepreter_variables_ce;

ZEPHIR_INIT_CLASS(Litesploit_Intepreter_Variables);

PHP_METHOD(Litesploit_Intepreter_Variables, loader);
PHP_METHOD(Litesploit_Intepreter_Variables, write);
PHP_METHOD(Litesploit_Intepreter_Variables, variable);

ZEND_BEGIN_ARG_INFO_EX(arginfo_litesploit_intepreter_variables_loader, 0, 0, 1)
	ZEND_ARG_INFO(0, litesploit)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_litesploit_intepreter_variables_write, 0, 0, 1)
	ZEND_ARG_INFO(0, litesploit)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_litesploit_intepreter_variables_variable, 0, 0, 1)
	ZEND_ARG_INFO(0, litesploit)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(litesploit_intepreter_variables_method_entry) {
	PHP_ME(Litesploit_Intepreter_Variables, loader, arginfo_litesploit_intepreter_variables_loader, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_ME(Litesploit_Intepreter_Variables, write, arginfo_litesploit_intepreter_variables_write, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_ME(Litesploit_Intepreter_Variables, variable, arginfo_litesploit_intepreter_variables_variable, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_FE_END
};
