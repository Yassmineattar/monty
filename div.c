#include "monty.h"
/**
 * _div - divides the 2 first elements fof the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_num: Interger representing the line number of of the opcode.
 */
void _div(stack_t **stack, unsigned int line_num)
{
	int quo;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		more_err(8, line_num, "div");

	if ((*stack)->n == 0)
		more_err(9, line_num);
	(*stack) = (*stack)->next;
	quo = (*stack)->n / (*stack)->prev->n;
	(*stack)->n = quo;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
