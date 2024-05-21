#include "main.h"
#include <unistd.h>

int print_last_digit(int n)
{
	int lastDigit = n % 10;
	char lastDigitChar = (char)(lastDigit + '0');
	_putchar(lastDigitChar);
	return lastDigit;
}
