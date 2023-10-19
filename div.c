#include "monty.h"
/**
 * div_two - function to divide two numbers
 * @stack: pointer to head of stack
 * @line_number: pointer to line of the file
 * Return: void
 */
void div_two(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
/**
 * _div_two - function to divide two top numbers
 * @head: pointer to head of stack
 * @line_number: pointer to line of the file
 * Return: Exit Success else Exit failure
 */
int _div_two(stack_t **head, unsigned int line_number)
{
	stack_t *temp = NULL;
	int element1 = 0, element2 = 2, exit_code = EXIT_SUCCESS;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		return (EXIT_FAILURE);
	}
	element1 = (*head)->n;
	element2 = (*head)->next->n;
	if (element1 == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		return (EXIT_SUCCESS);
	}
	temp = *head;
	(*head)->next->n = element2 / element1;
	*head = (*head)->next;
	(*head)->prev = NULL;
	free(temp);
	return (exit_code);
}
