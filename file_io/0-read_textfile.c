#include "main.h"
#include <fcntl.h>
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - read text file and write output to stdout
 * @filename: name of file to open and read
 * @letters: amount of letters in the file
 * Return: rd on success, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buff;

	buff = malloc(sizeof(char *) letters);

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
		return (0);
	}
	free(buff);
	close(op);
	return (rd);
}
