#include "monty.h"

/**
 * free_args - free alocated memory pointer
 */

void free_args()
{
	if (arguments == NULL)
		return;

	if (arguments->instruction)
	{
		free(arguments->instruction);
		arguments->instruction = NULL;
	}

	head_fre();

	if (arguments->line)
	{
		free(arguments->line);
		arguments->line = NULL;
	}

	free(arguments);
}
