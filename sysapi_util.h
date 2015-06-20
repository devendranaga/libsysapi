#ifndef __SYSAPI_UTIL_H__
#define __SYSAPI_UTIL_H__
#include <stdio.h>
#include <stdarg.h>
#include <sys/time.h>
#include <time.h>
#include <stdlib.h>

#define SYSAPI_LEVEL_NORM 4
#define SYSAPI_LEVEL_INFO 3
#define SYSAPI_LEVEL_WARN 2
#define SYSAPI_LEVEL_ERR  1

// log the informational message
// this will show up green on the console
#define sysapi_print_info(msg, ...) sysapi_printf(SYSAPI_LEVEL_INFO, msg " "__VA_ARGS__)

// log the warning message
// this will show up yellow on the console
#define sysapi_print_warn(msg, ...) sysapi_printf(SYSAPI_LEVEL_WARN, msg " "__VA_ARGS__)

// log the error message
// this will show up red on the console
#define sysapi_print_err(msg, ...) sysapi_printf(SYSAPI_LEVEL_ERR, msg " " __VA_ARGS__)

// log the normal informational message
// this will show up as a normal message on the console
#define sysapi_print_norm(msg, ...) sysapi_printf(SYSAPI_LEVEL_NORM, msg " " __VA_ARGS__)

#define sysapi_log_info sysapi_print_info

#define sysapi_log_warn sysapi_print_warn

#define sysapi_log_err sysapi_print_err

#define sysapi_log_norm sysapi_print_norm

// get a line from a file. The line will be copied to the buf.
// the last new line from the file will be eliminated from the buffer
int sysapi_get_line(char *buf, FILE *fp, int len);

int sysapi_stringrand(char *elem, int len);

#define SYSAPI_ARCH_64_BIT 1
#define SYSAPI_ARCH_32_BIT 2

int sysapi_get_arch(void);

int sysapi_daemonize(char *wd, char *lfile);

int sysapi_device_isatty(int fd);

int sysapi_get_ttyname(int fd, char *name, int len);

#endif

