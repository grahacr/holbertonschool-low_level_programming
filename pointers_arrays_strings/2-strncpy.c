#include "main.h"
/**
 * _strncpy - function to copy strings
 * @dest: destination string
 * @src: source string
 * @n: integer to take
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
