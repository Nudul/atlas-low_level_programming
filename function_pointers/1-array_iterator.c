#include "function_pointers.h"
/**
* array_iterator - main function
* @array: array of ints
* @size: size of array
* @action: executes current array element
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		exit(98);
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
