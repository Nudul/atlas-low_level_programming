#include "main.h"
#include <unistd.h>

int print_last_digit(int n)
{
	int lastDigit = n % 10;
	putchar((unsigned char)(lastDigit + '0'));
	return lastDigit;
}
