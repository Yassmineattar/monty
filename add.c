#include "monty.h"
/**
 * add - Adds the top two elements of the stack
 * @stack: Pointes to top node of the stack.
 * @line_number:line number of of the opcode.
 */
void add(stack_t **stack, unsigned int line_number)
{
	int s;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		more_err(8, line_number, "add");
	s = (*stack)->n + (*stack)->next->n;
	(*stack)->next->n = s;
	(*stack) = (*stack)->next;
	free((*stack)->next);
}
