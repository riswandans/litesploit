
extern zend_class_entry *litesploit_intepreter_libs_ce;

ZEPHIR_INIT_CLASS(Litesploit_Intepreter_Libs);

PHP_METHOD(Litesploit_Intepreter_Libs, loader);

ZEND_BEGIN_ARG_INFO_EX(arginfo_litesploit_intepreter_libs_loader, 0, 0, 1)
	ZEND_ARG_INFO(0, litesploit)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(litesploit_intepreter_libs_method_entry) {
	PHP_ME(Litesploit_Intepreter_Libs, loader, arginfo_litesploit_intepreter_libs_loader, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_FE_END
};
