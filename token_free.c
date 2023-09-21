#include "monty.h"

void token_free(void)
{
	int i = 0;

	if (arguments->tokens == NULL)
		return;

	while (arguments->tokens[i])
	{
		free(arguments->tokens[i]);
		i++;
	}

	free(arguments->tokens);
	arguments->tokens = NULL;
}
