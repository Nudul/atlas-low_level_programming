#include "main.h"
/**
 * _memset - is very cool
 * Return: s
 * @s: asdf
 * @b: awdsdf
 * @n: dfklkf
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
