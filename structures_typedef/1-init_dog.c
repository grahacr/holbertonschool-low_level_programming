#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - initialize variable of type struct dog
 * @d: pointer to struct dog
 * @name: name of dog to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
