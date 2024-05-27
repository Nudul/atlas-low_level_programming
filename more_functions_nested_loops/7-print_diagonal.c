#include "main.h"
/**
 * print_diagonal - very cool function
 *
 * @n: very cool letter
 *
 * Return: 1 or 0
 */
void print_diagonal(int n)
{
	int i, j;

	i = 0;

	while (n > 0)
	{
		j = i;
		if (j > 0)
		{
			while (j > 0)
			{
				_putchar(' ');
				j--;
			}
		}
		_putchar('\\');
		_putchar('\n');
i++;
n--;
	}

	if (i < 1)
	{
		_putchar('\n');
	}
}
