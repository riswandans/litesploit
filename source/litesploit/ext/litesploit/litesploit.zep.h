
extern zend_class_entry *litesploit_litesploit_ce;

ZEPHIR_INIT_CLASS(Litesploit_Litesploit);

PHP_METHOD(Litesploit_Litesploit, engine);
PHP_METHOD(Litesploit_Litesploit, executecode);

ZEND_BEGIN_ARG_INFO_EX(arginfo_litesploit_litesploit_engine, 0, 0, 1)
	ZEND_ARG_INFO(0, location)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_litesploit_litesploit_executecode, 0, 0, 1)
	ZEND_ARG_INFO(0, location)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(litesploit_litesploit_method_entry) {
	PHP_ME(Litesploit_Litesploit, engine, arginfo_litesploit_litesploit_engine, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Litesploit_Litesploit, executecode, arginfo_litesploit_litesploit_executecode, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_FE_END
};
