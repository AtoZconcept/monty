#include "monty.h"

/**
 * fail_malloc - malloc memory allocation fail
 */

void fail_malloc(void)
{
	dprint(2, "Error: malloc failed\n");
	free_args();
	exit(EXIT_FAILURE);
}
