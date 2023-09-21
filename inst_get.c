#include "monty.h"

void instruct_get(void)
{
	int i;
	instruct_t instruction[] = {
		{"push", &push}, {"pop", &pop},
		{"pint", &pint}, {"swap", &swap},
		{"nop", &nop}, {"add", &add},
		{"pall", &pall}, {"sub", &sub},
		{"mul", &mul}, {"div", &div},
		{"stack", &stack}, {"queue", &queue},
		{"push", &push}, {"pop", &pop},
