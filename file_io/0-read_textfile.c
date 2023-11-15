#include "main.h"
#include <fcntl.h>
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buff;
	buff = malloc(sizeof(char)*letters);

	if (buff == NULL || filename == NULL)
	{
		return (0);
	}
	op = open(filename, O_RDONLY);
	rd = read(op, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	if (op == -1 || rd == -1 || wr == -1)
	{
		free(buff);
	}
	free(buff);
	close(op);
	return (rd);
}
