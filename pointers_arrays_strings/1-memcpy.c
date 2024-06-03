#include "main.h"
/**
 * _memcpy - very cool function
 * @dest: asdfgg
 * @src: asdlfl
 * @n: kfldkf
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
