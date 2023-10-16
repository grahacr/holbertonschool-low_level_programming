#include "main.h"
#include <stdio.h>
/**
 *
 */
int main(int argc, char *argv[])
{
	if (argc > 0 && argv[0] != NULL)
	{
		char *argument = argv[0];
		printf("%s\n", argument);
		*argument++;
	}
	return (0);
}
