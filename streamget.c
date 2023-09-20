#include "monty.h"

void streamget_fail(char *file)
{
	dprint(stderr, "Error: Can't open file %s\n", file);
	free_args();
	exit(EXIT_FAILURE);
}

void streamget(char *file)
{
	int file_d;

	file_d = open(file, 0_RDOMLY);

