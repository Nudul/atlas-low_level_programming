#include <stdio.h>

/**
 * main - blahblahblah
 *
 * Return: 0
 */

int main(void)
{
	int digits[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int buffer[11]; 
	int index = 0;

	int i, j;

	for (i = 0; i <= 9; ++i)
	{
		buffer[index++] = digits[i];

		for (j = 0; j < index; ++j)
		{
			putchar(buffer[j] + '0');
			if (j < index - 1)
			{
				putchar(',');
				putchar(' ');
			}
		}
	

		index = 0;

	}
	putchar('\n');

	return (0);
}
