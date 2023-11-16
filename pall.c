#include "monty.h"
/**
 * pall.c - prints all the values on the stack
 * @stack: points to top node of the stack
 * @line_number: line number of  the opcode.
 */
void pall(stack_t **stack, unsigned int line_number){
    stack_t *p;
    (void)line_number;
    
    p = *stack;
    if (stack == NULL)
        exit(EXIT_FAILURE);
    while (p != NULL)
    {
        printf("%d\n", p->n);
        p = p-> next;
    }
}