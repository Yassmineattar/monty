#include "monty.h"

/**
 * pop - removes the top element of the stack with a new line
 * @stack:  points to top node of the stack
 * @line_number: line number of the opcode.
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *p;

	if (stack == NULL || (*stack) == NULL)
	{
		more_err(7, line_number);
	}
	p = *stack;
	*stack = p->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(p);
}
