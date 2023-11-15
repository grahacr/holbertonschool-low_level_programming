#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
/**
 *
 *
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, len;
	len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	op = open(filename, O_WRONLY | O_CREAT | O_TRUNC);
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
