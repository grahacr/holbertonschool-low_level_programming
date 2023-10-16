#include "main.h"
#include <stddef.h>
/**
 * main - main program entry point
 * @argc: number of arguments
 * @argv: the arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc > 0 && argv[0] != NULL)
	{
		char *program = argv[0];

		while (*program)
		{
			_putchar(*program);
			program++;
		}
		_putchar('\n');
	}
	return (0);
}
