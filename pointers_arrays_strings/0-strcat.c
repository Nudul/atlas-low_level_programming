include "main.h"
/**
 * _strcat is very cool
 *
 * Return: dest stuff
 */
char *_strcat(char *dest, char *src);
{

// find end of dest string
char *d = dest;

while (*d)
{
d++;
}

// copy src string starting from first character to end of dest
while (*src)
{
	*d++ = *src++;
}

// Null terminator at end of string
*d = '\0';

return dest; // return modified dest string
}
