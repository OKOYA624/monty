#include "monty.h"
/**
 * mul - multiply two numbers
 * @stack: pointer to head
 * @line_number: pointer to line
 * Return: Void
 */
void mul(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
/**
 * _mul - multiply two numbers
 * @head: pointer to head
 * @line_number: pointer to line
 * Return: Exit_success else failure
 */
int _mul(stack_t **head, unsigned int line_number)
{
	stack_t *temp = NULL;
	int element1 = 0, element2 = 2, exit_code = EXIT_SUCCESS;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		return (EXIT_FAILURE);
	}
	temp = *head;
	element1 = (*head)->n;
	element2 = (*head)->next->n;
	element2 = element2 * element1;
	(*head)->next->n = element2;
	*head = (*head)->next;
	(*head)->prev = NULL;
	free(temp);
	return (exit_code);
}
