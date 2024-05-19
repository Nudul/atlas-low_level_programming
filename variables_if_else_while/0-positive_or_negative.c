#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - void is an empty argument so it won't do anything
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

/* Checks the value of n */
	if (n > 0)
{
		printf("%d is positive\n", n);
	} else if (n < 0)
{
		printf("%d is negative\n", n);
	} else
{
		printf("0 is zero\n");
	}

	return (0);
}
