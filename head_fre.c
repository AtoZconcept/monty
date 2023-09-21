#include "monty.h"

void head_fre(void)
{
	if (arguments->head)
		stack_fre(arguments->head);

	arguments->head = NULL;
}

void stack_fre(stack_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
	{
		stack_fre(head->next);
	}

	free(head);
}

void all_free(void)
{
	stream_clos();
	token_free();
	free_args();
}