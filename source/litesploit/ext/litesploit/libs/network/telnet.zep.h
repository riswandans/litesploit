
extern zend_class_entry *litesploit_libs_network_telnet_ce;

ZEPHIR_INIT_CLASS(Litesploit_Libs_Network_Telnet);

PHP_METHOD(Litesploit_Libs_Network_Telnet, __construct);
PHP_METHOD(Litesploit_Libs_Network_Telnet, connect);
PHP_METHOD(Litesploit_Libs_Network_Telnet, disconnect);
PHP_METHOD(Litesploit_Libs_Network_Telnet, execute);
PHP_METHOD(Litesploit_Libs_Network_Telnet, removeNonPrintableCharacters);
PHP_METHOD(Litesploit_Libs_Network_Telnet, getResponse);
PHP_METHOD(Litesploit_Libs_Network_Telnet, sleep);
PHP_METHOD(Litesploit_Libs_Network_Telnet, throwConnectError);

ZEND_BEGIN_ARG_INFO_EX(arginfo_litesploit_libs_network_telnet___construct, 0, 0, 2)
	ZEND_ARG_INFO(0, server)
	ZEND_ARG_INFO(0, port)
	ZEND_ARG_INFO(0, username)
	ZEND_ARG_INFO(0, password)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_litesploit_libs_network_telnet_disconnect, 0, 0, 0)
	ZEND_ARG_INFO(0, exit)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_litesploit_libs_network_telnet_execute, 0, 0, 1)
	ZEND_ARG_INFO(0, cmd)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_litesploit_libs_network_telnet_removenonprintablecharacters, 0, 0, 1)
	ZEND_ARG_INFO(0, str)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_litesploit_libs_network_telnet_sleep, 0, 0, 0)
	ZEND_ARG_INFO(0, sleepTime)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_litesploit_libs_network_telnet_throwconnecterror, 0, 0, 1)
	ZEND_ARG_INFO(0, num)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(litesploit_libs_network_telnet_method_entry) {
	PHP_ME(Litesploit_Libs_Network_Telnet, __construct, arginfo_litesploit_libs_network_telnet___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Litesploit_Libs_Network_Telnet, connect, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Litesploit_Libs_Network_Telnet, disconnect, arginfo_litesploit_libs_network_telnet_disconnect, ZEND_ACC_PUBLIC)
	PHP_ME(Litesploit_Libs_Network_Telnet, execute, arginfo_litesploit_libs_network_telnet_execute, ZEND_ACC_PUBLIC)
	PHP_ME(Litesploit_Libs_Network_Telnet, removeNonPrintableCharacters, arginfo_litesploit_libs_network_telnet_removenonprintablecharacters, ZEND_ACC_PRIVATE)
	PHP_ME(Litesploit_Libs_Network_Telnet, getResponse, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Litesploit_Libs_Network_Telnet, sleep, arginfo_litesploit_libs_network_telnet_sleep, ZEND_ACC_PUBLIC)
	PHP_ME(Litesploit_Libs_Network_Telnet, throwConnectError, arginfo_litesploit_libs_network_telnet_throwconnecterror, ZEND_ACC_PRIVATE)
	PHP_FE_END
};
