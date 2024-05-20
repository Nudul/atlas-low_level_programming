#include <stdio.h>

/**
 *
 * main - blahblahblah
 *
 * Return: 0
 */

int main(void)
{
	int i; /* declaring i before the loop otherwise checker freaks out */
	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}

	return (0);
}
