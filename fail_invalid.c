#include "monty.h"

/**
 * fail_malloc - malloc memory allocation fail
 */

void fail_malloc(void)
{
	dprintf(2, "Error: malloc failed\n");
	free_args();
	exit(EXIT_FAILURE);
}


void invalid_instruct(void)
{
	dprintf(2, "L%d: unknown instruction %s\n", 
			arguments->line_number, arguments->tokens[0]);
	all_free();
	exit(EXIT_FAILURE);
}