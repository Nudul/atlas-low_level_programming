#include <stdio.h>

/**
 * main - has void argument which is empty i guess
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 15; i++)
		{
	if (i >= 10 && i <= 15)
		{
	putchar('a' + i - 10);
	}
	else
	{
	putchar('0' + i);
	}
}
	putchar('\n');

	return (0);
}
