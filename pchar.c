#include "monty.h"
/**
 * pchar - prints the cha at the top o stack
 * @stack: Points to top node of the stack.
 * @line_number: Interger representing the line number of of the opcode.
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	int code;

	if (stack == NULL || *stack == NULL)
		str_err(11, line_number);

	code = (*stack)->n;
	if (code < 0 || code > 127)
		str_err(10, line_number);
	printf("%c\n", code);
}
