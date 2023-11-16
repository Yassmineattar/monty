#include "monty.h"

/**
 * mul - multiplies the 2 first elements of the stack
 * @stack: Points to top node of the stack
 * @line_num:line num of of the opcode
 */
void mul(stack_t **stack, unsigned int line_num)
{
	int mul;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		more_err(8, line_num, "mul");

	(*stack) = (*stack)->next;
	mul = (*stack)->n * (*stack)->prev->n;
	(*stack)->n = mul;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
