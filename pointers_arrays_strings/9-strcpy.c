#include "main.h"
/**
 * *_strcpy - sdflfk
 * @src: blahblahlah
 * @dest: blahblahblah
 *
 * Return: 'dest' is pointed to
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
