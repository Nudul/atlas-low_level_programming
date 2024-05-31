#include "main.h"
#include <stddef.h>
/*
 */
char *_strncat(char *dest, char *src, int n)
{
	char *d = dest;
	while (*d)
	{
		d++;
	}

	if (((size_t)(d - dest) + n) >= sizeof(dest))
	{
		return (dest);
	}

	int i = 0;
	
	while (i < n && src[i])
	{
		*d++ = src[i++];
	}

	*d = '\0';

	return (dest);
}
