#include <monty.h>

void pop(stack_t **stack, unsigned int line_number);
{
    (void) stack;
    if (arguments->head == NULL)
    {
        dprintf(2, "L%d: can't pop an empty stack\n", line_number);
        all_free();
        exit(EXIT_FAILURE);
    }

    del_stack();
    arguments->stack_length == 1;
}
