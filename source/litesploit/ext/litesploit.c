
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#if PHP_VERSION_ID < 50500
#include <locale.h>
#endif

#include "php_ext.h"
#include "litesploit.h"

#include <ext/standard/info.h>

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/globals.h"
#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"



zend_class_entry *litesploit_intepreter_libs_ce;
zend_class_entry *litesploit_intepreter_load_ce;
zend_class_entry *litesploit_intepreter_statement_ce;
zend_class_entry *litesploit_intepreter_variables_ce;
zend_class_entry *litesploit_libs_file_ce;
zend_class_entry *litesploit_libs_http_curl_ce;
zend_class_entry *litesploit_libs_http_url_ce;
zend_class_entry *litesploit_libs_network_telnet_ce;
zend_class_entry *litesploit_litesploit_ce;

ZEND_DECLARE_MODULE_GLOBALS(litesploit)

PHP_INI_BEGIN()
	
PHP_INI_END()

static PHP_MINIT_FUNCTION(litesploit)
{
#if PHP_VERSION_ID < 50500
	char* old_lc_all = setlocale(LC_ALL, NULL);
	if (old_lc_all) {
		size_t len = strlen(old_lc_all);
		char *tmp  = calloc(len+1, 1);
		if (UNEXPECTED(!tmp)) {
			return FAILURE;
		}

		memcpy(tmp, old_lc_all, len);
		old_lc_all = tmp;
	}

	setlocale(LC_ALL, "C");
#endif
	REGISTER_INI_ENTRIES();
	ZEPHIR_INIT(Litesploit_Intepreter_Libs);
	ZEPHIR_INIT(Litesploit_Intepreter_Load);
	ZEPHIR_INIT(Litesploit_Intepreter_Statement);
	ZEPHIR_INIT(Litesploit_Intepreter_Variables);
	ZEPHIR_INIT(Litesploit_Libs_File);
	ZEPHIR_INIT(Litesploit_Libs_Http_Curl);
	ZEPHIR_INIT(Litesploit_Libs_Http_Url);
	ZEPHIR_INIT(Litesploit_Libs_Network_Telnet);
	ZEPHIR_INIT(Litesploit_Litesploit);

#if PHP_VERSION_ID < 50500
	setlocale(LC_ALL, old_lc_all);
	free(old_lc_all);
#endif
	return SUCCESS;
}

#ifndef ZEPHIR_RELEASE
static PHP_MSHUTDOWN_FUNCTION(litesploit)
{

	zephir_deinitialize_memory(TSRMLS_C);
	UNREGISTER_INI_ENTRIES();
	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_litesploit_globals *litesploit_globals TSRMLS_DC)
{
	litesploit_globals->initialized = 0;

	/* Memory options */
	litesploit_globals->active_memory = NULL;

	/* Virtual Symbol Tables */
	litesploit_globals->active_symbol_table = NULL;

	/* Cache Enabled */
	litesploit_globals->cache_enabled = 1;

	/* Recursive Lock */
	litesploit_globals->recursive_lock = 0;

	/* Static cache */
	memset(litesploit_globals->scache, '\0', sizeof(zephir_fcall_cache_entry*) * ZEPHIR_MAX_CACHE_SLOTS);


}

static PHP_RINIT_FUNCTION(litesploit)
{

	zend_litesploit_globals *litesploit_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(litesploit_globals_ptr TSRMLS_CC);
	//zephir_init_interned_strings(TSRMLS_C);

	zephir_initialize_memory(litesploit_globals_ptr TSRMLS_CC);


	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(litesploit)
{

	

	zephir_deinitialize_memory(TSRMLS_C);
	return SUCCESS;
}

static PHP_MINFO_FUNCTION(litesploit)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_LITESPLOIT_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_LITESPLOIT_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_LITESPLOIT_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_LITESPLOIT_VERSION);
	php_info_print_table_row(2, "Build Date", __DATE__ " " __TIME__ );
	php_info_print_table_row(2, "Powered by Zephir", "Version " PHP_LITESPLOIT_ZEPVERSION);
	php_info_print_table_end();

	DISPLAY_INI_ENTRIES();
}

static PHP_GINIT_FUNCTION(litesploit)
{
	php_zephir_init_globals(litesploit_globals TSRMLS_CC);
}

static PHP_GSHUTDOWN_FUNCTION(litesploit)
{

}


zend_function_entry php_litesploit_functions[] = {
ZEND_FE_END

};

zend_module_entry litesploit_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	NULL,
	PHP_LITESPLOIT_EXTNAME,
	php_litesploit_functions,
	PHP_MINIT(litesploit),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(litesploit),
#else
	NULL,
#endif
	PHP_RINIT(litesploit),
	PHP_RSHUTDOWN(litesploit),
	PHP_MINFO(litesploit),
	PHP_LITESPLOIT_VERSION,
	ZEND_MODULE_GLOBALS(litesploit),
	PHP_GINIT(litesploit),
	PHP_GSHUTDOWN(litesploit),
	NULL,
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_LITESPLOIT
ZEND_GET_MODULE(litesploit)
#endif
