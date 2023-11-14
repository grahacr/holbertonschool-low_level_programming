#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
/**
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int descriptor = open(filename, 0_RDONLY);
	char buff[letters];
	if (descriptor == -1)
	{
		return (-1);
	}
	ssize_t bread = read(descriptor, buff, sizeof(buff));

	if (bread == -1)
	{
		return (-1);
	}
	else
	{
		if (write(STDOUT_FILENO, buff, bread) != bread)
		{
			bread = -1;
		}
	}
	close(descriptor);
	return (bread);
}
