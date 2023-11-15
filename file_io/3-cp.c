#include <fcntl.h>
#include <main.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 */
int copy_file(const char *file_from, const char *file_to)
{
int source, dest;
ssize_t rd, wr;
char buff[1024];
source = open(file_from, O_RDONLY);
if (source == -1)
{
	return (-1);
}
dest = open(file_to, O_WRONLY | O_CREATE | O_TRUNC, S_IRUSR | S_IWUSR);
if (dest == -1)
{
	close(source);
	return (-1);
}
while ((rd = read(source, buffer, sizeof(buffer)) > 0))
{
	wr = write(dest, buffer, rd);
	if (wr != rd)
	{
		close(source);
		close(dest);
		return (-1);
	}
}
if (close(source) == -1 || close(dest) == -1)
{
	return (-1);
}
return (1);
}

