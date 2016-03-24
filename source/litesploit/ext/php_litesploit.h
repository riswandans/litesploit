
/* This file was generated automatically by Zephir do not modify it! */

#ifndef PHP_LITESPLOIT_H
#define PHP_LITESPLOIT_H 1

#ifdef PHP_WIN32
#define ZEPHIR_RELEASE 1
#endif

#include "kernel/globals.h"

#define PHP_LITESPLOIT_NAME        "litesploit"
#define PHP_LITESPLOIT_VERSION     "0.0.1"
#define PHP_LITESPLOIT_EXTNAME     "litesploit"
#define PHP_LITESPLOIT_AUTHOR      ""
#define PHP_LITESPLOIT_ZEPVERSION  "0.9.2a-dev"
#define PHP_LITESPLOIT_DESCRIPTION ""



ZEND_BEGIN_MODULE_GLOBALS(litesploit)

	int initialized;

	/* Memory */
	zephir_memory_entry *start_memory; /**< The first preallocated frame */
	zephir_memory_entry *end_memory; /**< The last preallocate frame */
	zephir_memory_entry *active_memory; /**< The current memory frame */

	/* Virtual Symbol Tables */
	zephir_symbol_table *active_symbol_table;

	/** Function cache */
	HashTable *fcache;

	zephir_fcall_cache_entry *scache[ZEPHIR_MAX_CACHE_SLOTS];

	/* Cache enabled */
	unsigned int cache_enabled;

	/* Max recursion control */
	unsigned int recursive_lock;

	/* Global constants */
	zval *global_true;
	zval *global_false;
	zval *global_null;
	
ZEND_END_MODULE_GLOBALS(litesploit)

#ifdef ZTS
#include "TSRM.h"
#endif

ZEND_EXTERN_MODULE_GLOBALS(litesploit)

#ifdef ZTS
	#define ZEPHIR_GLOBAL(v) TSRMG(litesploit_globals_id, zend_litesploit_globals *, v)
#else
	#define ZEPHIR_GLOBAL(v) (litesploit_globals.v)
#endif

#ifdef ZTS
	#define ZEPHIR_VGLOBAL ((zend_litesploit_globals *) (*((void ***) tsrm_ls))[TSRM_UNSHUFFLE_RSRC_ID(litesploit_globals_id)])
#else
	#define ZEPHIR_VGLOBAL &(litesploit_globals)
#endif

#define ZEPHIR_API ZEND_API

#define zephir_globals_def litesploit_globals
#define zend_zephir_globals_def zend_litesploit_globals

extern zend_module_entry litesploit_module_entry;
#define phpext_litesploit_ptr &litesploit_module_entry

#endif
