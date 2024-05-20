#include <stdio.h>

/**
 * main - blahblahblahblah
 *
 * Return: 0
 */
int main(void)
{
	char *str = "_putchar";
	int len = 8;

	for (int i = 0; i < len; i++)
	{
		write (1, &str[i], 1);
	}

	write (1, "\n", 1);

	return (0);

}
