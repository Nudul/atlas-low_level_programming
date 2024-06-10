#include "main.h"
/**
 * factorial - main factorial function
 * @n: input number
 * Return: -1 error case. 1 because 0 factorial is 1.
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
