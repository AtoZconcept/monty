#include "monty.h"

/**
 * stremget_fail - error handler when file reading fail
 * @file: name of the file
*/
void streamget_fail(char *file)
{
	dprintf(2, "Error: Can't open file %s\n", file);
/*	free_args();*/
	exit(EXIT_FAILURE);
}

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
