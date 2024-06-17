#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *m;
	unsigned int i;
	char* ptr = (char *)m;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}

	m = malloc(nmemb * size);

	if (m == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}

	return (m);
}
