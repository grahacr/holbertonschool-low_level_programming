#include "main.h"
/**
 * _memcpy - copy memory from one array to another
 * @dest: destination array
 * @src: source array
 * @n: integer to take
 * Return: dest on success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
