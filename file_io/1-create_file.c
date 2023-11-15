#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stddef.h>
/**
 * create_file - create file using system calls
 * @filename: name of file to create
 * @text_content: string of content to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr;

	if (filename == NULL)
	{
		return (-1);
	}
	op = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (op == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		wr = write(op, text_content, strlen(text_content));
		if (wr == -1)
		{
			close(op);
			return (-1);
		}
	}
	if (close(op) == -1)
	{
		return (-1);
	}
	return (1);
}
