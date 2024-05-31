#include "main.h"
/**
 * _strncpy - cool function
 * @n: cool letter
 * @dest: cool thingamajig
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
char *d = dest;

while (*src && n > 0)
{
	*d++ = *src++;
	n--;
}
while (n > 0)
{
	*d++ = '\0';
	n--;
}

return (dest);
}
