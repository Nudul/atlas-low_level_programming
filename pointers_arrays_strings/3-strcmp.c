#include "main.h"
/**
 * _strcmp - tried to copy this function
 * @s1: asdf
 * @s2: asdffghk
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(char *)s1 - *(char *)s2);
}
