#include "monty.h"
/**
 * sub -  subtracts the top element from the second top element
 * @stack: Pointsto top node of the stack.
 * @line_number:line number of of the opcode.
 */
void sub(stack_t **stack, unsigned int line_number)
{
	int diff;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)

		more_err(8, line_number, "sub");


	(*stack) = (*stack)->next;
	diff = (*stack)->n - (*stack)->prev->n;
	(*stack)->n = diff;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}