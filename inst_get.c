#include "monty.h"

void instruct_get(void)
{
	int i;
	instruction_t instruction[] = {
		{"push", &push}, {"pop", &pop},
		{"pint", &pint}, {"swap", &swap},
		{"nop", &nop}, {"add", &add},
		{"pall", &pall}, {"sub", &sub},
		{"mul", &mul}, {"div", &_div},
		{"stack", &stack}, {"queue", &queue},
		{"rotl", &rotl}, {"rotr", &rotr},
		{"pstr", &pstr}, {"pchar", &pchar},
		{"mod", &mod},
		{NULL, NULL}
	};

	if (arguments->num_tokens == 0)
		return;

	for (; instructions[i].opcode != NULL; i++)
	{
		if (strcmp(instructions[i].opcode, argument->tokens[0])
				== 0)
		{
			argument->instruction->opcode = instructions[i].opcode;
			argument->instruction->f = instructions[i].f;
			return;
		}
	}
	invalid_instruct();
}
