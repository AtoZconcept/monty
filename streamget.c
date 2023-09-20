#include "monty.h"

/**
 * stremget_fail - error handler when file reading fail
 * @file: name of the file
*/
void streamget_fail(char *file)
{
	dprint(stderr, "Error: Can't open file %s\n", file);
	free_args();
	exit(EXIT_FAILURE);
}

/**
 * streamget - get stream of file
 * @file: name of the file
*/
void streamget(char *file)
{
	int file_d;

	file_d = open(file, O_RDONLY);
	if (file_d == -1)
		streamget_fail(file);
	
	arguments->stream = fdopen(file_d, "r");
	if (arguments->stream == NULL)
	{
		close(file_d);
		streamget_fail(file);
	}
}