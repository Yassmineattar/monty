#include "monty.h"

/**
 * pint - prints the value at the top of the stack with a new line
 * @stack:  points to top node of the stack
 * @line_number: line number of the opcode.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || (*stack) == NULL)
	{
		more_err(6, line_number);
	}
	printf("%d\n", (*stack)->n);
}
