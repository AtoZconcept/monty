#include "monty.h"

/**
 * stremget_fail - error handler when file reading fail
 * @file: name of the file
*/
void streamget_fail(char *file)
{
	dprintf(2, "Error: Can't open file %s\n", file);
	free_args();
	exit(EXIT_FAILURE);
}

void stream_clos(void)
{
	if (arguments->stream == NULL)
		return;

	fclose(arguments->stream);
	arguments->stream = NULL;
}