#include "main.h"
/**
 * strstr - very cool function
 * Return: NULL
 */
char *strstr(char *haystack, char *needle)
{
	if (*needle == '\0' || haystack == NULL)
	{
		return (NULL);
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

		if (n* == '\0')
		{
			return (haystack);
		}

		haystack++;
	}
	
	return (NULL);
}
