#include "main.h"

/**
 * main - blahblahblah
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz";

	_putchar('a');

	_putchar('b' -1);

	int i;

	for (i = 2; i <= 25; i++)
	{
		_putchar(i + 'a');
	}

_putchar('\n');

}
