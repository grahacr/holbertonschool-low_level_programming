#include "main.h"
/**
 * _strncat - concatenated string
 * @dest: destination string
 * @src: source string
 * @n: integer to take and not surpass
 * Return: return pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*result != '\0')
	{
		result++;
	}
	while (*src != '\0' && n > 0)
	{
		*result = *src;
		result++;
		src++;
		n--;
	}
	*result = '\0';
	return (dest);
}
