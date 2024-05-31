#include "main.h"
/**
 * _strcat is very cool
 *
 * Return: dest stuff
 */
char *_strcat(char *dest, char *src)
{

char *d = dest;

while (*d)
{
d++;
}

while (*src)
{
	*d++ = *src++;
}

*d = '\0';

return dest;
}
