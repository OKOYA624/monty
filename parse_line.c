#include "monty.h"

/**
 * parse_line - Pases line of Monty bytecode & exect corresponding instruction.
 * @head: Double pointer to the stack's head.
 * @line: Line of Monty bytecode.
 * @line_number: Line number of the current bytecode instruction.
 * Return: Exit code of the execution.
 */
int parse_line(stack_t **head, char *line, unsigned int line_number)
{
	char *opcode = NULL, *operand = NULL;
	int exit_code = EXIT_SUCCESS, index = 0;

	instruction_t instructions[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add_two},
		{"sub", sub},
		{"div", div_two},
		{"mul", mul},
		{"nop", nop},
		{NULL, NULL}
	};

	opcode = strtok(line, DELIM);
	operand = strtok(NULL, DELIM);

	if (opcode != NULL)
	{
		for (; instructions[index].opcode != NULL; index++)
		{
			if (strcmp(instructions[index].opcode, opcode) == 0)
			{
				instructions[index].f(head, line_number);
				exit_code = caller(head, opcode, operand, line_number);
				break;
			}
		}

		if (instructions[index].opcode == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
			exit_code = EXIT_FAILURE;
		}
	}

	return (exit_code);
}
