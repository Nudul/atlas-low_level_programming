#include "main.h"
/**
 * print_square - very cool shape
 *
 * @size: blahblah
 */
void print_square(int size)
{
	int i, j;

	j = 0;

	if (size < 1)
		_putchar('\n');

	while (j < size)
	{
	i = 0;
	while (i < size)
	{
		_putchar('#');
		i++;
	}
	_putchar('\n');
	j++;
	}
}
