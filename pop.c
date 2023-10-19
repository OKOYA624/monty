#include "monty.h"
/**
 * pop - Removes the top element of the stack.
 * @stack: Double pointer to the stack's head.
 * @line_number: Line number of the current operation.
 */
void pop(stack_t **stack, unsigned int line_number)
{
		(void) stack;
		(void) line_number;
}

/**
 * _pop - Removes the top element of the stack.
 * @head: Double pointer to the stack's head.
 * @line_number: Line number of the current operation.
 * Return: EXIT_SUCCESS if successful, otherwise EXIT_FAILURE.
 */
int _pop(stack_t **head, unsigned int line_number)
{
	stack_t *temp = NULL;

	int exit_code = EXIT_SUCCESS;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		return (EXIT_FAILURE);
	}
	temp = *head;
	*head = (*head)->next;
	if (*head != NULL)
	{
		(*head)->prev = NULL;
	}
	free(temp);
	return (exit_code);
}
