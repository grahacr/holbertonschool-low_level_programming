#include "main.h"
#include <stdio.h>
/**
 * main - entry point, main program
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		if (argv[i] != NULL)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
