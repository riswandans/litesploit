
extern zend_class_entry *litesploit_libs_http_bindshell_ce;

ZEPHIR_INIT_CLASS(Litesploit_Libs_Http_Bindshell);

PHP_METHOD(Litesploit_Libs_Http_Bindshell, loader);

ZEND_BEGIN_ARG_INFO_EX(arginfo_litesploit_libs_http_bindshell_loader, 0, 0, 1)
	ZEND_ARG_INFO(0, litesploit)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(litesploit_libs_http_bindshell_method_entry) {
	PHP_ME(Litesploit_Libs_Http_Bindshell, loader, arginfo_litesploit_libs_http_bindshell_loader, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_FE_END
};
