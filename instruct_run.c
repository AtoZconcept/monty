#include "monty.h"

void instruct_run(void)
{
	stack_t *stack = NULL;

	if (arguments->num_tokens == 0)
		return;

	arguments->instruction->f(&stack, arguments->line_number);
}
