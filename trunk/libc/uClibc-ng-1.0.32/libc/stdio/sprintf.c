/* Copyright (C) 2004       Manuel Novoa III    <mjn3@codepoet.org>
 *
 * GNU Library General Public License (LGPL) version 2 or later.
 *
 * Dedicated to Toni.  See uClibc/DEDICATION.mjn3 for details.
 */

#include "_stdio.h"
#include <stdarg.h>

#ifndef __STDIO_HAS_VSNPRINTF
#warning Skipping sprintf since no vsnprintf!
#else


int sprintf(char *__restrict buf, const char * __restrict format, ...)
{
	va_list arg;
	int rv;

	va_start(arg, format);
	rv = vsnprintf(buf, SIZE_MAX, format, arg);
	va_end(arg);

	return rv;
}
libc_hidden_def(sprintf)

#endif
