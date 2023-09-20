#include "monty.h"

arg_tream *arguments = NULL;
/**
 * main - Entering the interpreter
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: returns 0 (Success)
 */

int main(int argc, int **argv)
{
	size_t n = 0;

	check_arg(argc);
	init_args();
	streamget(argv[1]);

	while (getline(&arguments->line, &n, arguments->stream) != -1)
	{
		printf("%s", arguments->line);
	}

	return (0);
}