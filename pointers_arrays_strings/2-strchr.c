#include "main.h"
/**
 * _strchr - very cool function
 * @s: blahblah
 * @c: asdfgh
 * Return: NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
