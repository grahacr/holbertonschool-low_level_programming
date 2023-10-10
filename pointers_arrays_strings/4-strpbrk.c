#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - locate first occcurence of byte from accept in s
 * @s: string to search
 * @accept: string containing bytes to search for
 * Return: pointer to matching byte in s or NULL if found
 *
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '0')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				return (s);
			}
			ptr++;
		}
		s++;
	}
	return (NULL);
}
