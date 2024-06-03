#include "main.h"
#include <stddef.h>
/**
 * _strstr - very cool function
 * @haystack: asdkjfkf
 * @needle: jkdasfgdhf
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h != '\0' && *n == *h)
		{
			n++;
			h++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
