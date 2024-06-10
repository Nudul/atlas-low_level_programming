#include "main.h"
/**
 * int factorial - main factorial function
 * @n: input number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return ((n) * factorial(n - 1));
}
