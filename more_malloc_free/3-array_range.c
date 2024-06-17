#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* array_range - array of integers
* @min: least values
* @max: most values
* Return: ptr to new array
*/
int *array_range(int min, int max)
{
	int elements = max - min + 1;
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	arr = (int *)malloc(elements * sizeof(int));

	if (arr == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < elements; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
