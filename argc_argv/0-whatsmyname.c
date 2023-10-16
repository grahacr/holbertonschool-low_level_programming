#include "main.h"
int main (int argc, char *argv[])
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
