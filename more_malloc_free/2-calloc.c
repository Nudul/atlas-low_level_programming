#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _calloc - allocating memory to 0
* @size: set to 0
* @nmemb: array elements
* Return: pointer to memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *m;
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}

	m = malloc(nmemb * size);

	if (m == NULL)
	{
		return (NULL);
	}

	ptr = (char *)m;
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}

	return (m);
}
