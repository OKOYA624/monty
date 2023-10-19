#include "monty.h"
/**
 * push - Pushes an element onto the stack.
 * @stack: Double pointer to the stack's head.
 * @line_number: Line number of the current operation.
 */
void push(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
/**
 * _push - Pushes an element onto the stack.
 * @head: Double pointer to the stack's head.
 * @line_number: Line number of the current operation.
 * @operand: String representing the operand value to push.
 * Return: EXIT_SUCCESS if successful, otherwise EXIT_FAILURE.
 */
int _push(stack_t **head, unsigned int line_number, char *operand)
{
	stack_t *newnode = NULL;
	int exit_code = EXIT_SUCCESS;

	newnode = malloc(sizeof(stack_t));

	if (newnode == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
				exit_code = EXIT_FAILURE;
	}
	else
	{
		if (operand == NULL || isdigits(operand) == 0)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit_code = EXIT_FAILURE;
			free(newnode);
		}
		else
		{
			newnode->n = atoi(operand);
			newnode->prev = NULL;
			newnode->next = *head;
			*head = newnode;
		}
	}

	return (exit_code);
}
/**
 * isdigits - Checks if a string consists of digits only.
 * @operand: String to check.
 * Return: 1 if the string consists of digits only, 0 otherwise.
 */
int isdigits(char *operand)
{
	int i = 0;
	int exit_code = 1;

	while (operand[i] != '\0')
	{
		if (operand[i] == '-' || isdigit(operand[i]))
		{
			i++;
			continue;
		}
		exit_code = 0;
		break;
	}

	return (exit_code);
}
/**
  * isPositive - check if data is positive
  * @operand: pointer to the data
  * Return: 1
  */

int isPositive(char *operand)
{
	int i = 0;
	int exit_code = 1;

	while (operand[i] != '\0')
	{
		if ((operand[i] < 0))
		{
			i++;
			continue;
		}
		exit_code = 0;
		break;
	}

	return (exit_code);
}
