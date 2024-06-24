#include "variadic_functions.h"
/**
* print_strings - main function
* @separator: str to be printed
* @n: num of strings
* Return: none
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *str;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char*);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	va_end(arg);

	printf("\n");
}
