#include "main.h"

/**
 * _islower - is a very cool function.
 *
 * @c: I hate betty linter with all my being.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
