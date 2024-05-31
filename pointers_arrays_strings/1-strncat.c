#include "main.h"
#include <stddef.h>
/**
 * _strncat - very epic
 * @src: cool letters
 * @n: the best letter
 * @dest: does cool things
 * Return: dest is cool
 */
char *_strncat(char *dest, char *src, int n)
{

	char *d = dest;
	int dest_len = 0;

	while (*d)
	{
		d++;
		dest_len++;
	}

	while (*src && n > 0)
	{
		*d++ = *src++;
		n--;
		dest_len++;
	}

	*d = '\0';

	return (dest);
}
