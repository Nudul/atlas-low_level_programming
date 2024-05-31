#include "main.h"
#include <stddef.h>
/*
 */
char *_strncat(char *dest, char *src, int n)
{

	char *d = dest;
	int i = 0;

	while (*d)
	{
		d++;
	}

	size_t dest_len = d - dest;

	if (dest_len + n >= sizeof(dest))
	{
		return (dest);
	}

	while (i < n && src[i])
	{
		*d++ = src[i++];
	}

	*d = '\0';

	return (dest);
}
