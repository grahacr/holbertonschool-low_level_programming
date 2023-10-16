#include "main.h"
#include <stdio.h>
/**
 * multiply - multiply input of 2 integers
 * @int: integer to multiply
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
	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = multiply(num1, num2);
	printf("%d\n", result);
	return (0);
}
