#include "monty.h"

void invalid_instruct(void)
{
	dprintf(2, "L%d: unknown instruction %s\n",
			argument->line_number, argument->tokens[0]);
	stream_clos();
	token_free();
	free_args();
	exit(EXIT_FAILURE);
}
