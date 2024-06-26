#include <stdlib.h>
#include "dog.h"
/**
* free_dog - frees dogs
* @d: pointer
* Return: not needed
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
