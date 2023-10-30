#include "3-calc.h"
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
/**
 * main - main method
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: 0 on success, -1 on failure
 */
int main(int argc, char *argv[])
{
	int first;
	int second;
	char *op;
	int (*result)(int, int);

	if (argc <= 1)
	{
		printf("Error\n");
		exit(98);
	}
	first = atoi(argv[1]);
	second = atoi(argv[3]);
	op = argv[2];
	result = get_op_func(op);
	if (result != NULL)
	{
		printf("%d\n", result(first, second));
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
