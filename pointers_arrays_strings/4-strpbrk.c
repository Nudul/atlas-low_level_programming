#include "main.h"
/**
 * _strpbrk - very cool function
 * @s: blahblah
 * @p: sadklf
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
	char *p = accept;

	while (*p != '\0')
	{
		if (*s == *p)
		{
			return (s);
		}
		p++;
	}
	s++;
	}
return (NULL);
}
