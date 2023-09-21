#include "monty.h"

void del_stack(void)
{
    stack_t *temp;

    temp = arguments->head;
    arguments->head = temp->next;
    free(temp);
}