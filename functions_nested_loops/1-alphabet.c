#include "main.h"

/**
 * main - blahblahblah
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
}

int main()
{
	print_alphabet();
	return(0);
}
