
extern zend_class_entry *litesploit_litepreter_ce;

ZEPHIR_INIT_CLASS(Litesploit_Litepreter);

PHP_METHOD(Litesploit_Litepreter, engine);
PHP_METHOD(Litesploit_Litepreter, content);

ZEND_BEGIN_ARG_INFO_EX(arginfo_litesploit_litepreter_content, 0, 0, 2)
	ZEND_ARG_INFO(0, location)
	ZEND_ARG_INFO(0, type_header)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(litesploit_litepreter_method_entry) {
	PHP_ME(Litesploit_Litepreter, engine, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Litesploit_Litepreter, content, arginfo_litesploit_litepreter_content, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_FE_END
};
