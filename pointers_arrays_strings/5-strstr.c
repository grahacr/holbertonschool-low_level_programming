#include "main.h"
#include <stddef.h>
/**
 * strstr - search through string for another string
 * @haystack: string to search
 * @needle: string being searched for
 * Return: NULL
 */
char *strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
