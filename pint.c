#include <stdio.h>

void pint(stack_t **stack, unsigned int line_number)
{
    (void) stack;
    if (arguments->head == NULL)
    {
        dprintf(2, "L%d: can't pint, stack empty\n", line_number);
        all_free();
        exit(EXIT_FAILURE);
    }
    printf("%d\n", arguments->head->n);
}