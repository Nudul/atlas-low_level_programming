#include "variadic_functions.h"
/**
* print_numbers - main function
* @seperator: string thats printed
* @n: number of integers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		if (seperator && i < n - 1)
		printf("%s", seperator);
			printf("%d", va_arg(arg, int));
	}
	va_end(arg);
	printf("\n");
}
