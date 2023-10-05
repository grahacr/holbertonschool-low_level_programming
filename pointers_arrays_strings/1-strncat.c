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
	char *_strncat = dest;

	while (*_strncat != '\0')
	{
		_strncat++;
	}
	while (*src != '\0' && n > 0)
	{
		*_strncat = *src;
		_strncat++;
		src++;
		n--;
	}
	*_strncat = '\0';
return: (dest);
}
