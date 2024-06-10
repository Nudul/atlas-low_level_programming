#include "main.h"
/**
 * _strlen_recursion - main function for returning string length recursively
 * @s: points to first character
 * Return: 0 for when the end of the string is reached. 1 is used for the recursion that goes through each character in the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1) + _strlen_recursion(s + 1);
}
