#include "monty.h"
/**
  * caller - call the function based on opcode provided
  * @head: pointer to head of the stack
  * @opcode: pointer to a array string character
  * @operand: pointer to a array string character
  * @line_number: number of the line in a file
  * Return: EXIT_SUCCESS on success else EXIT_FAILURE
  */
int caller(stack_t **head, char *opcode, char *operand,
				unsigned int line_number)
{
	int exit_code = EXIT_SUCCESS;

	if (strcmp(opcode, "push") == 0)
	{
		exit_code = _push(head, line_number, operand);
	}
	else if (strcmp(opcode, "pall") == 0)
	{
		exit_code = _pall(head);
	}
	else if (strcmp(opcode, "pint") == 0)
	{
		exit_code = _pint(head, line_number);
	}
	else if (strcmp(opcode, "pop") == 0)
	{
		exit_code = _pop(head, line_number);
	}
	else if (strcmp(opcode, "swap") == 0)
	{
		exit_code = _swap(head, line_number);
	}
	else if (strcmp(opcode, "add") == 0)
	{
		exit_code = _add_two(head, line_number);
	}
	else if (strcmp(opcode, "sub") == 0)
	{
		exit_code = _sub(head, line_number);
	}
	else if (strcmp(opcode, "div") == 0)
	{
		exit_code = _div_two(head, line_number);
	}
	else if (strcmp(opcode, "mul") == 0)
	{
		exit_code = _mul(head, line_number);
	}
	else if (strcmp(opcode, "nop") == 0)
	{
		nop(head, line_number);
	}
	return (exit_code);
}
