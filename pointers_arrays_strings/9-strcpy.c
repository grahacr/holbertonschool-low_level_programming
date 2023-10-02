#include "main.h"
/**
 * _strcpy - copy string to new destination
 * @dest: destination
 * @src: source
 * Return: original_dest
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}
