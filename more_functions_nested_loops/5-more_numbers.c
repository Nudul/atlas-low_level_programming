#include "main.h"
/**
 *
 * _putchar - is very cool
 *
 *
 * Return: 1 or 0
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (int j =0; j <= 14; j++)
		{
			putchar(j + '0');
		}
		putchar('\n');
	}

	return (0);
}
