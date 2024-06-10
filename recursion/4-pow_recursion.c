#include "main.h"
/**
 * _pow_recursion - main function to return x to power of y
 * Return: -1 negative y. 1 if power of 0 is 1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	return x *  _pow_recursion(x, y - 1);
}
