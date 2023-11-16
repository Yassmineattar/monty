#include "monty.h"
stack_t *head = NULL;
/**
 * main - entry point
 * @argc: arguments count
 * @argv: list of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	open_file(argv[1]);
	free_nodes();
	return (0);
}
/**
 * create - Creates a node.
 * @n: Number to go inside the node.
 * Return: Upon sucess a pointer to the node. Otherwise NULL.
 */
stack_t *create(int n)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));
	if (node == NULL)
		err(4);
	node->next = NULL;
	node->prev = NULL;
	node->n = n;
	return (node);
}
/**
 * add_to_queue - Adds a node to the queue.
 * @nouv: points to the new node.
 * @line_num: line number of the opcode.
 */
void add_to_queue(stack_t **nouv, __attribute__((unused))unsigned int line_num)
{
	stack_t *p;

	if (nouv == NULL || *nouv == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
		head = *nouv;
		return;
	}
	p = head;
	while (p->next != NULL)
		p = p->next;

	p->next = *nouv;
	(*nouv)->prev = p;
}
/**
 * free_nodes - Frees nodes in the stack.
 */
void free_nodes(void)
{
	stack_t *p;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}