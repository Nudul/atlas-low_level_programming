#include "main.h"
/**
 * _sqrt_recursion - main function to return square root
 * @i: iterator to loop through values
 * @n: square root needed
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	if (n == 1)
	{
		return (-1);
	}

	if (n == 0)
	if (n == 2)
	{
		return (n);
	}

	int i;

	for (i = 1; i <= n / 2; i++)
	{
		if (i * i == n)
		{
			return (i);
		}
		else if (i * i > n)
		{
			return (-1);
		}
	}

	return (-1);
}
