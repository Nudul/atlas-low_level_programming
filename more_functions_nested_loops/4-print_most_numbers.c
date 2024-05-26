#include "main.h"
/**
 * print_most_numbers - so cool
 *
 *
 *
 * Return: 1 or 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
	char c = (char)i;
	if(c!= '2' && c!= '4')
		{
		_putchar(c);
		}
	}
}
