#include "monty.h"
/**
  * read_file - read the opened file
  * @file: pointer to the opened file
  * Return: EXIT_SUCCESS on success else EXIT_FAILURE
  */
int read_file(FILE *file)
{
	/* store each line in a file */
	char *line = NULL;
	size_t n = 0;
	unsigned int line_number = 0;
	stack_t *head = NULL;
	int exit_code = EXIT_SUCCESS;

	while (getline(&line, &n, file) != -1)
	{
		line_number++;
		exit_code = parse_line(&head, line, line_number);
		if (exit_code == EXIT_FAILURE)
		{
			break;
		}
	}
	free(line);
	free_list(&head);
	return (exit_code);
}
