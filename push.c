#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
	if (arguments->num_tokens <= 1 || !(number(arguments->tokens[1])))
	{
		free_args();
		dprintf(2, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
		fail_malloc();
	(*stack)->next = (*stack)->prev = NULL;

	(*stack)->n = (int) atoi(arguments->tokens[1]);

	if (arguments->head != NULL)
	{
		(*stack)->next = arguments->head;
		arguments->head->prev = *stack;
	}
	arguments->head = *stack;
	arguments->stack_length += 1;
}

