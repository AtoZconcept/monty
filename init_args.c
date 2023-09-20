#include "monty.h"

/**
 * init_args - init pointer to arg_sream struct
 */

void init_args()
{
	arguments = malloc(sizeof(arg_tream));
	if (arguments == NULL)
		fail_malloc();

	arguments->stream = NULL;
	arguments->line = NULL;
}
