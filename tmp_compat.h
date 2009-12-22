#ifndef TMP_COMPAT_H
#define TMP_COMPAT_H

#include <glib.h>

#if !GLIB_CHECK_VERSION(2,16,0)
int g_strcmp0 (const char *str1, const char *str2);
#endif /* !GLIB_CHECK_VERSION(2,16,0) */

#endif /* TMP_COMPAT_H */
