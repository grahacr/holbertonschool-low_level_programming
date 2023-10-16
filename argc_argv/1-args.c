#include "main.h"
#include <stdio.h>
/**
 * main - main program
 * @argc: number of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
