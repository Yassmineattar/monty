#include "monty.h"
/**
 * add - Adds the top two elements of the stack
 * @stack: Pointes to top node of the stack.
 * @line_num:line number of of the opcode.
 */
void add(stack_t **stack, __attribute__((unused))unsigned int line_num)
{
	int s;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		more_err(8, line_num, "add");
	(*stack) = (*stack)->next;
	s = (*stack)->n + (*stack)->prev->n;
	(*stack)->n = s;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
