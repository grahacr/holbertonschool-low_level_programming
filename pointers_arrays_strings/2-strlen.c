#include "main.h"
/**
 * _strlen - string length
 * @s: pointer to string of characters
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	return (length);
}
