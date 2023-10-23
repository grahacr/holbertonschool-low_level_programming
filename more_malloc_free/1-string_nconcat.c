#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *
 *
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
	return (result);
}
