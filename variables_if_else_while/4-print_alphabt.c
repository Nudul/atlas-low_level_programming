#include <stdio.h>

/**
 * main - blahblah
 *
 * Return: 0
 */

int main(void)
{
	for (int i = 'a'; i <= 'z'; i++)
	{
		if (i!= 'q' && i!= 'e')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
