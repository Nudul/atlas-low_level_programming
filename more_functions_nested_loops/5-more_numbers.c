#include "main.h"
/**
 * more numbers - is very cool
 *
 * @i: is awesome
 * @j: is very cool
 *
 * Return: 1 or 0
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
	j = 0;
	while (j < 15)
	{
		if (j > 9)
			_putchar(j / 10 + '0');
		_putchar(j % 10 + '0');
		j++;
	}
	i++;
	_putchar('\n');
	}
}
