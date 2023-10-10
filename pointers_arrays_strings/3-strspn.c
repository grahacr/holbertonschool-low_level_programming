#include "main.h"
/**
 * _strspn - get length of prefix substring
 * @s: character array segment
 * @accept: char string to search
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '0')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				break;
			}
		ptr++;
	}
	if (*ptr == '\0')
	{
		return (count);
	}
	count++;
	s++;
	}
	return (count);
}
