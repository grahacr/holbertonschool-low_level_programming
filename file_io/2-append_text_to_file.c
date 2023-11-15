#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stddef.h>
/**
 * append_text_to_file - append text to end of a file
 * @filename: file to append to end of
 * @text_content: text to append to end of file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr;

	if (filename == NULL)
	{
		return (-1);
	}
	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
	{
		return (-1);
	}
	wr = write(op, text_content, strlen(text_content));
	if (wr == -1)
	{
		close(op);
		return (-1);
	}
	if (close(op) == -1)
	{
		return (-1);
	}
	return (1);
}
