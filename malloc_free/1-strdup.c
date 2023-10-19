#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - copy string to duplicate
 * @str: string to copy
 * Return: duplicate or NULL if error
 */
char *_strdup(char *str)
{
	int i;
	int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	char *duplicate = (char *)malloc(length + 1);
	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[length] = '\0';
	return (duplicate);
}
