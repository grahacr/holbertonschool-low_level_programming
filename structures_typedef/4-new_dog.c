#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - duplicate string function
 * @str: string to duplicate
 * Return: duplicate on success
 */
char *_strdup(char *str)
{
	int i;
	int length = 0;
	char *duplicate;

	if (str == NULL)
		return (NULL);
	while (str[length] != '\0')
		length++;
	duplicate = (char *)malloc(length + 1);
	if (duplicate == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[length] = '\0';
	return (duplicate);
}
/**
 * new_dog - create new dog with info
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: new_dog;
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = _strdup(name);
	new_dog->owner = _strdup(owner);
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	return (new_dog);
}
