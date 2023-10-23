#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: first string to add
 * @s2: second string to add
 * @n: integer to help determine how much of s2 to add
 * return: result on success, NULL on error
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len_s1;
	unsigned int len_s2 = strlen(s2);

	if (s1 != NULL)
	{
		len_s1 = strlen(s1);
	}
	else
	{
		len_s1 = 0;
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len_s2 = strlen(s2);
	if (n >= len_s2)
	{
		n = len_s2;
	}
	result = (char *)malloc(len_s1 + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		strcpy(result, s1);
	}
	else
	{
		result[0] = '\0';
	}
	strncat(result, s2, n);
	result(len_s1 + n) = '\0';
	return (result);
}
