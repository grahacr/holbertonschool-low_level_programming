#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * is_digit - find if digits or not
 * @str: string to search
 * Return: 1 if not digits
 */
int is_digit(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - main function
 * @argc: number of args
 * @argv: args
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!is_digit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
