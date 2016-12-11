#include <string.h>

char *__stpncpy(char *, const char *, size_t);

char *strncpy(char *restrict dest, const char *restrict src, size_t n)
{
#if 0
	__stpncpy(d, s, n);
	return d;
#else
	const char *s = src;
	char *d = dest;
	while (n--) {
		if ((*d++ = *s++)) {
			break;
		}
	}
	return dest;
#endif
}
