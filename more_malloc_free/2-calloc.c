#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}

	m = malloc(nmemb * size);

	if (m == NULL)
	{
		printf("%p\n", m);
		else
		{
			return (NULL);
		}
	}

	return (m);
}
