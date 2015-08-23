/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.in by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define if you have (reliable) BSD signals. */
/* #undef BSD_RELIABLE_SIGNALS */

/* Configuration file name */
#define CPATH "ircd.conf"

/* Enable debugging code */
/* #undef DEBUGMODE */

/* Domain name to be used for some statistics gathering */
#define DOMAINNAME "*"

/* Path to data directory */
#define DPATH "/usr/home/devnet/ircd/lib"

/* Define to implement epoll system calls */
/* #undef EPOLL_NEED_BODY */

/* Force inlining for a few critical functions */
#define FORCEINLINE 1

/* Path name used as a base for the GeoIP include files. */
#define GEOIP_INCLUDES_PATH "/usr/local/include"

/* Path name used as a base for the GeoIP lib files. */
#define GEOIP_LIBS_PATH "/usr/local/lib"

/* Define to 1 if you have the <crypt.h> header file. */
/* #undef HAVE_CRYPT_H */

/* Define to 1 if you have the `getrusage' function. */
#define HAVE_GETRUSAGE 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `kqueue' function. */
#define HAVE_KQUEUE 1

/* Define to 1 if you have the `nsl' library (-lnsl). */
/* #undef HAVE_LIBNSL */

/* Define to 1 if you have the `resolv' library (-lresolv). */
/* #undef HAVE_LIBRESOLV */

/* Define to 1 if you have the `socket' library (-lsocket). */
/* #undef HAVE_LIBSOCKET */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <poll.h> header file. */
#define HAVE_POLL_H 1

/* Define to 1 if system calls automatically restart after interruption by a
   signal. */
#define HAVE_RESTARTABLE_SYSCALLS 1

/* Define to 1 if you have the `setrlimit' function. */
#define HAVE_SETRLIMIT 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/devpoll.h> header file. */
/* #undef HAVE_SYS_DEVPOLL_H */

/* Define to 1 if you have the <sys/epoll.h> header file. */
/* #undef HAVE_SYS_EPOLL_H */

/* Define to 1 if you have the <sys/event.h> header file. */
#define HAVE_SYS_EVENT_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the `times' function. */
#define HAVE_TIMES 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define if we have va_copy */
#define HAVE_VA_COPY 1

/* Define if we have __va_copy */
#define HAVE___VA_COPY 1

/* Enable IPv6 support */
#define IPV6 1

/* Define if building on Solaris */
/* #undef IRCU_SOLARIS */

/* Path to debugging log file */
#define LPATH "ircd.log"

/* Maximum number of network connections */
#define MAXCONNECTIONS 471146

/* Define if you have BSD non-blocking sockets. */
/* #undef NBLOCK_BSD */

/* Define if you have POSIX non-blocking sockets. */
#define NBLOCK_POSIX /**/

/* Define if you have SysV non-blocking sockets. */
/* #undef NBLOCK_SYSV */

/* Disable assertions */
/* #undef NDEBUG */

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* Path to /dev/null */
#define PATH_DEVNULL "/dev/null"

/* Define if you have POSIX signals. */
#define POSIX_SIGNALS /**/

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `int64_t', as computed by sizeof. */
#define SIZEOF_INT64_T 8

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 8

/* Path to executable for restarts */
#define SPATH "/usr/home/devnet/ircd/bin/ircd"

/* Path name used as a base for the ssl include files. */
#define SSL_INCLUDES_PATH "/usr/include"

/* Path name used as a base for the ssl lib files. */
#define SSL_LIBS_PATH "/usr/lib"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define if you have (unreliable) SysV signals. */
/* #undef SYSV_UNRELIABLE_SIGNALS */

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Define to enable the /dev/poll engine */
/* #undef USE_DEVPOLL */

/* Define to enable the epoll engine */
/* #undef USE_EPOLL */

/* Define if you are using GeoIP */
#define USE_GEOIP /**/

/* Define if you are using GeoIP with *_gl() functions */
#define USE_GEOIP_GL /**/

/* Define to enable the kqueue engine */
#define USE_KQUEUE 1

/* Specify whether or not to use poll() */
#define USE_POLL 1

/* Define if you are using OpenSSL */
#define USE_SSL /**/

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#define YYTEXT_POINTER 1

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Define to `short' if <sys/types.h> does not define. */
/* #undef int16_t */

/* Define to `long' if <sys/types.h> does not define. */
/* #undef int32_t */

/* Define to `long long' if <sys/types.h> does not define. */
/* #undef int64_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* type to use in place of socklen_t if not defined */
/* #undef socklen_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */

/* Define to `unsigned short' if <sys/types.h> does not define. */
/* #undef uint16_t */

/* Define to `unsigned long' if <sys/types.h> does not define. */
/* #undef uint32_t */

/* Define to `unsigned long long' if <sys/types.h> does not define. */
/* #undef uint64_t */
