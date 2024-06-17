#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *m = nmemb;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}

	void* m = calloc(nmemb, size);

	if (m == NULL)
	{
		return (NULL);
	}

	return (m);
}
