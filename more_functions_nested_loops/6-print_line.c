#include "main.h"
/**
 * print_line - cool function
 *
 *
 *
 * Return: 1 or 0
 */
void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
		else
	{
		for (int i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
	}
}
