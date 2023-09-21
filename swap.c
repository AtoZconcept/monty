#include "monty.h"

void swap(stack_t **stack, unsigned int line_number)
{
    stack_t *temp4, *temp5;
    (void) stack;
    if (arguments->stack_length < 2)
    {
        dprintf(2, "L%d: can't swap, stack too short\n", line_number);
        all_free();
        exit(EXIT_FAILURE);
    }

    temp4 = arguments->head;
    temp5 = temp4->next;
    temp4->next = temp5->next;

    if (temp4->next)
        temp4->next->prev = temp4;

    temp5->next = temp4;
    temp4->prev = temp5;
    temp5->prev = NULL;
    arguments->head = temp5;
}