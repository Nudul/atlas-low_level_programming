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
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if(j >= 10)
			putchar('1' + (j / 10));
			putchar('0' + (j % 10));
		}
		else
		{
			putchar('0' + j);
		}
	}
}
