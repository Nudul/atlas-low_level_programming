#include "main.h"

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	write(1, &lastDigit, 1);
	return lastDigit;
}
