PHP_ARG_ENABLE(litesploit, whether to enable litesploit, [ --enable-litesploit   Enable Litesploit])

if test "$PHP_LITESPLOIT" = "yes"; then

	

	if ! test "x" = "x"; then
		PHP_EVAL_LIBLINE(, LITESPLOIT_SHARED_LIBADD)
	fi

	AC_DEFINE(HAVE_LITESPLOIT, 1, [Whether you have Litesploit])
	litesploit_sources="litesploit.c kernel/main.c kernel/memory.c kernel/exception.c kernel/hash.c kernel/debug.c kernel/backtrace.c kernel/object.c kernel/array.c kernel/extended/array.c kernel/string.c kernel/fcall.c kernel/extended/fcall.c kernel/require.c kernel/file.c kernel/operators.c kernel/math.c kernel/concat.c kernel/variables.c kernel/filter.c kernel/iterator.c kernel/time.c kernel/exit.c litesploit/intepreter/libs.zep.c
	litesploit/intepreter/load.zep.c
	litesploit/intepreter/statement.zep.c
	litesploit/intepreter/variables.zep.c
	litesploit/libs/file.zep.c
	litesploit/libs/http/bindshell.zep.c
	litesploit/libs/http/curl.zep.c
	litesploit/libs/http/url.zep.c
	litesploit/libs/input.zep.c
	litesploit/libs/litepreter.zep.c
	litesploit/libs/network/ftp.zep.c
	litesploit/libs/network/telnet.zep.c
	litesploit/litepreter.zep.c
	litesploit/litesploit.zep.c "
	PHP_NEW_EXTENSION(litesploit, $litesploit_sources, $ext_shared,, )
	PHP_SUBST(LITESPLOIT_SHARED_LIBADD)

	old_CPPFLAGS=$CPPFLAGS
	CPPFLAGS="$CPPFLAGS $INCLUDES"

	AC_CHECK_DECL(
		[HAVE_BUNDLED_PCRE],
		[
			AC_CHECK_HEADERS(
				[ext/pcre/php_pcre.h],
				[
					PHP_ADD_EXTENSION_DEP([litesploit], [pcre])
					AC_DEFINE([ZEPHIR_USE_PHP_PCRE], [1], [Whether PHP pcre extension is present at compile time])
				],
				,
				[[#include "main/php.h"]]
			)
		],
		,
		[[#include "php_config.h"]]
	)

	AC_CHECK_DECL(
		[HAVE_JSON],
		[
			AC_CHECK_HEADERS(
				[ext/json/php_json.h],
				[
					PHP_ADD_EXTENSION_DEP([litesploit], [json])
					AC_DEFINE([ZEPHIR_USE_PHP_JSON], [1], [Whether PHP json extension is present at compile time])
				],
				,
				[[#include "main/php.h"]]
			)
		],
		,
		[[#include "php_config.h"]]
	)

	CPPFLAGS=$old_CPPFLAGS

	PHP_INSTALL_HEADERS([ext/litesploit], [php_LITESPLOIT.h])

fi
