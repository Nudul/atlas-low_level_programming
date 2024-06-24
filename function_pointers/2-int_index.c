#include "function_pointers.h"
/**
* int_index - array
* @array: array of ints
* @size: size of array
* @cmp: checking elements of array
* Return: -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		return (i);
	}
	return (-1);
}
