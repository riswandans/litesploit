
extern zend_class_entry *litesploit_intepreter_load_ce;

ZEPHIR_INIT_CLASS(Litesploit_Intepreter_Load);

PHP_METHOD(Litesploit_Intepreter_Load, loader);
PHP_METHOD(Litesploit_Intepreter_Load, loads);

ZEND_BEGIN_ARG_INFO_EX(arginfo_litesploit_intepreter_load_loader, 0, 0, 1)
	ZEND_ARG_INFO(0, litesploit)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_litesploit_intepreter_load_loads, 0, 0, 1)
	ZEND_ARG_INFO(0, litesploit)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(litesploit_intepreter_load_method_entry) {
	PHP_ME(Litesploit_Intepreter_Load, loader, arginfo_litesploit_intepreter_load_loader, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_ME(Litesploit_Intepreter_Load, loads, arginfo_litesploit_intepreter_load_loads, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_FE_END
};
