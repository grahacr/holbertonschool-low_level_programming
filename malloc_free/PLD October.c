#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * concatenateStrings - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 */

char *concatenateStrings(const char *str1, const char *str2)
{
	char *result;
	size_t len_str1 = strlen(str1);
	size_t len_str2 = strlen(str2);

	if (str1 == NULL)
	{
		str1 = "";
	}
	if (str2 == NULL)
	{
		str2 = "";
	}
	result = (char *)malloc(len_str1 + len_str2 + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, str1);
	strcat(result, str2);
	printf("%s\n", result);
	return (result);
}
int main(int argc, char *argv[])
{
(void)argc;
concatenateStrings(argv[1], argv[2]);
return (0);
}
