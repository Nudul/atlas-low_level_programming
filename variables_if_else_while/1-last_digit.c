#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - void is an empty argument and won't do anything
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand(0) - RAND_MAX / 2;

	printf("Last digit of %d is ", n);

	int lastDigit = abs(n) % 10;

	if (lastDigit > 5 
{
		printf("and is greater than 5\n");
	}
	else if (lastDigit == 0)
{
		printf("and is 0\n");
	}
	else
{
		printf("and is less than 6 and not 0\n");
			}

	return (0);
}
