#include "main.h"
#include <unistd.h>

int main(void) 
{
	int r = print_lastdigit(98)
		return (0);
}

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	write(1, &lastDigit, 1);
	return lastDigit;
}
