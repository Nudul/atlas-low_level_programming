#include <stdio.h>

/**
 * main - blahblah
 *
 * Return 0
 */


int main(void)
{
	int i;

	for (i = 0; i <= 15; i++)
	{
		putchar((i < 10? '0' : 'a') - 10 + '0');
	}
	putchar ('\n');

	return (0);
}
