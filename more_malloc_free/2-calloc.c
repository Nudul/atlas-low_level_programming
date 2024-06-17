#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *m;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}

	m = malloc(nmemb * size);

	char* ptr;
	i = 0;

	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}

	if (m == NULL)
		{
			return (NULL);
		}

	return (m);
}
