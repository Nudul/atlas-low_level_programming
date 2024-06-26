#include "variadic_functions.h"

/**
 * print_all - prints all arguments
 * @format: types of argument
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, c = 0, j;
	va_list arg;
	char c_arg[] = "cifs";
	char *str;

	va_start(arg, format);
	while (format && format[i])
	{
		j = 0;
		while (c_arg[j])
		{
			if (format[i] == c_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(arg, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(arg, double)), c = 1;
				break;
			case 's':
				str = va_arg(arg, char *), c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	} printf("\n"), va_end(arg);
}
