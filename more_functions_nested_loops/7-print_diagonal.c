#include "main.h"
/**
 * print_diagonal - very cool function
 *
 *
 *
 * Return: 1 or 0
 */
void print_diagonal(int n)
{
	int i, j;
	
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n - i - 1; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		}
		putchar('\n');
	}
}
