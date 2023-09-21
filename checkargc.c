#include "monty.h"

/**
 * check_arg - check number of argument
 * @argc: number of argument
 *
 */

void check_arg(int argc)
{
	if (argc == 2)
		return;

	dprintf(2, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}