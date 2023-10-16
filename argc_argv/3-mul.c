#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * multiply - multiply input of 2 integers
 * @a: integer to multiply
 * @b: second integer to multiply
 * Return: product of integers
 */
int multiply(int a, int b)
{
	return (a * b);
}
/**
 * main - entry point, main program
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		int result = multiply(num1, num2);

		printf("%d\n", result);
		return (0);
	}
}
