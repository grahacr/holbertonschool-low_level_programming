#include "main.h"
/**
 * _strcat - new pointer that combines two other pointer values
 * @dest: destination
 * @src: source
 * Return: src source
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return dest;
}
