#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - free input for dog
 * @d: pointer to memory needing freed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name != NULL)
	{
		free(d->name);
		d->name = NULL;
	}
	if (d->owner != NULL)
	{
		free(d->owner);
		d->owner = NULL;
	}
	if (d->age != NULL)
	{
		free(d->age);
		d->age = NULL;
	}
	free(d);
}
