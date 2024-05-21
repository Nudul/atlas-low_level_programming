#include "main.h"
#include <unistd.h>

int print_last_digit(int)
{
	int lastDigit = n % 10;
	char asciiDigit = (char)(lastDigit + '0');
	write(1, &asciiDigit, 1);
	return lastDigit;
}
