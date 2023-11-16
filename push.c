#include "monty.h"
stack_t *head = NULL;
/**
 * push - function that adds a node to the stack.
 * @nouv: pointer to pointer that Points to the new node.
 * @line_num: line number of the opcode.
 */
void push(stack_t **nouv, __attribute__((unused))unsigned int line_num)
{
	if (nouv == NULL || *nouv == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
		head = *nouv;
		return;
	}
	(*nouv)->next = head;
	head->prev = *nouv;
	head = *nouv;
}
