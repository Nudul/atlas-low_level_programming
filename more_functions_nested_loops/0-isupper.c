#include "main.h"
/**
 * * _isupper - very cool function
 *
 * @c: i hate betty linter
 *
 * Return: 0
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
