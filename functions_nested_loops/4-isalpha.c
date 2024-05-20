#include "main.h"

/**
 * _isalpha - very cool and stuff
 *
 * @c: I HATE BETTY LINTER
 *
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
