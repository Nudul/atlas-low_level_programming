#include "main.h"
/**
 * print_name - main function
 * @name: name printed
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
