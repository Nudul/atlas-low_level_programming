#include "main.h"
/**
 * print_trinagle - blahblahblah
 * 
 * @size: cool stuff
 */
void print_triangle(int size)
{
	int i, j, n;

	i = 0;
	j = size - 1;
	while (i < size)
	{
		j = size - 1 - i;
		n = i + 1;
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		while (n > 0)
		{
			_putchar('#');
			n--;
		}
		_putchar('\n');
		i++;
	}

	if (size <= 0)
		_putchar('\n');
}
