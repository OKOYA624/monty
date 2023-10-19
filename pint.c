#include "monty.h"

/**
 * pint - Prints the value at the top of the stack.
 * @stack: Double pointer to the stack's head.
 * @line_number: Line number of the current operation.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}

/**
 * _pint - Prints the value at the top of the stack.
 * @head: Double pointer to the stack's head.
 * @line_number: Line number of the current operation.
 * Return: EXIT_SUCCESS if successful, otherwise EXIT_FAILURE.
 */
int _pint(stack_t **head, unsigned int line_number)
{
	int exit_code = EXIT_SUCCESS;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit_code = EXIT_FAILURE;
	}
	else
	{
		printf("%d\n", (*head)->n);
	}
	return (exit_code);
}
