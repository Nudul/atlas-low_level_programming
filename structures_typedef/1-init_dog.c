#include <stdio.h>
/**
*
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

struct dog
{
	char *name;
	float age;
	char *owner;
};