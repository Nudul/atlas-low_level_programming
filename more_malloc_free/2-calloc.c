#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *m = nmemb;

	if (nmemb == '\0' || size == '\0')
	{
	return (NULL);
	}

	while (m != '\0')
	{
	m++;
	}

	m = calloc(nmemb, size);
	return (m);
}
