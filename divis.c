#include "monty.h"

void _div(stack_t **stack, unsigned int line_number)
{
    stack_t *temp4, *temp5;
    
    (void) stack;
    if (arguments->stack_length < 2)
    {
        dprintf(2, "L%d: can't div, stack too short\n", line_number);
        all_free();
        exit(EXIT_FAILURE);
    }

    temp4 = arguments->head;
    temp5 = temp4->next;

    if (tepm4->n == 0)
    {
        dprintf(2, "L%d: division by zero\n", line_number);
        all_free();
        exit(EXIT_FAILURE);
    }

    temp5->n = temp5->n / temp4->n;
    del_stack();

    arguments->stack_length -= 1;
}