#include "monty.h"

/**
 * streamget - get stream of file
 * @file: name of the file
*/
void streamget(char *file)
{
	int fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		streamget_fail(file);
	
	arguments->stream = fdopen(fd, "r");
	if (arguments->stream == NULL)
	{
		close(fd);
		streamget_fail(file);
	}
}