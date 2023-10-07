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
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	if (n > 0)
	{
		*dest = '\0';
	}
	return (dest);
}
