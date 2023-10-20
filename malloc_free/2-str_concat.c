#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size_t len_s1 = strlen(s1);
	size_t len_s2 = strlen(s2);

	result = (char *)malloc(len_s1 + len_s2 + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}
