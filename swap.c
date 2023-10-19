#include "monty.h"
/**
 * swap - Swaps the top two elements of the stack.
 * @stack: Double pointer to the stack's head.
 * @line_number: Line number of the current operation.
 */
void swap(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}

/**
 * _swap - Swaps the top two elements of the stack.
 * @head: Double pointer to the stack's head.
 * @line_number: Line number of the current operation.
 * Return: EXIT_SUCCESS if successful, otherwise EXIT_FAILURE.
 */
int _swap(stack_t **head, unsigned int line_number)
{
	stack_t *node1 = NULL;
	stack_t *node2 = NULL;
	int exit_code = EXIT_SUCCESS;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		return (EXIT_FAILURE);
	}
	node1 = *head;
	node2 = (*head)->next;

	node1->next = node2->next;
	if (node1->next)
		node1->next->prev = node1;
	node2->prev = NULL;
	node2->next = node1;
	node1->prev = node2;

	*head = node2;
	return (exit_code);
}
