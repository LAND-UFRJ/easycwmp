/*
 * Configuration file for microxml, a micro XML-like file parsing library.
 *
 * Copyright 2003-2010 by Michael R Sweet.
 * Copyright 2011-2012 by Luka Perkov.
 *
 * These coded instructions, statements, and computer programs are the
 * property of Michael R Sweet and Luka Perkov. They are protected by
 * Federal copyright law. Distribution and use rights are outlined in
 * the file "COPYING" which should have been included with this file.
 * If this file is missing or damaged, see the license at:
 *
 *     http://www.minixml.org/
 */

/*
 * Include necessary headers...
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <ctype.h>

/*
 * Inline function support...
 */

#define inline


/*
 * Long long support...
 */

#define HAVE_LONG_LONG


/*
 * Do we have the snprintf() and vsnprintf() functions?
 */

#define HAVE_SNPRINTF
#define HAVE_VSNPRINTF


/*
 * Do we have the strXXX() functions?
 */

#define HAVE_STRDUP


/*
 * Do we have threading support?
 */

#define HAVE_PTHREAD_H


extern char	*_mxml_strdupf(const char *, ...);
extern char	*_mxml_vstrdupf(const char *, va_list);
