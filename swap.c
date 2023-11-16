#include "monty.h"
/**
 * swap - swaps the top two nodes of the stack
 * @stack: points to top node of the stack
 * @line_num:line number of the opcode
 */
void swap(stack_t **stack, unsigned int line_num)
{
	stack_t *p;

	if (stack == NULL || (*stack) == NULL || (*stack)->next == NULL)
		more_err(8, line_num);
	p = (*stack)->next;
	(*stack)->next = p->next;
	if (p->next != NULL)
		p->next->prev = *stack;
	p->next = *stack;
	(*stack)->prev = p;
	p->prev = NULL;
	*stack = p;
}
