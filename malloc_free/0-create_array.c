#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creating an array and finding the first character in it
 * size: tells machine size of the array
 * c: tells machine about a specific char
 * Return: NULL since array cant be zero
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	return (NULL);

	array = malloc(size * sizeof(*array));
	if (array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
