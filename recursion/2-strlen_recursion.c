#include "main.h"
/**
 * _strlen_recursion - main function for returning string length recursively
 * @s: points to first character
 * Return: 0 when string ends. 1 for recursion
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return ((1) + _strlen_recursion(s + 1));
}
