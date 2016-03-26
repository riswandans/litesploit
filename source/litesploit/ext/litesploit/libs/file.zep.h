
extern zend_class_entry *litesploit_libs_file_ce;

ZEPHIR_INIT_CLASS(Litesploit_Libs_File);

PHP_METHOD(Litesploit_Libs_File, loader);

ZEND_BEGIN_ARG_INFO_EX(arginfo_litesploit_libs_file_loader, 0, 0, 1)
	ZEND_ARG_INFO(0, litesploit)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(litesploit_libs_file_method_entry) {
	PHP_ME(Litesploit_Libs_File, loader, arginfo_litesploit_libs_file_loader, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_FE_END
};
