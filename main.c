#include "monty.h"
/**
  * main - Entry point
  * @argc: count the arguments on commannd line
  * @argv: hold the command line arguments
  * Return: EXIT_SUCCESS on success else EXIT_FAILURE
  */
int main(int argc, char *argv[])
{
	char *fileName = NULL;
	FILE *file = NULL;
	int exit_code = EXIT_SUCCESS;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit_code = EXIT_FAILURE;
	}
	else
	{
		fileName = argv[1];
		file = open_file(fileName);
		if (file == NULL)
		{
			exit_code = EXIT_FAILURE;
		}
		else
		{
			exit_code = read_file(file);
			close_file(file);
		}
	}
	return (exit_code);
}
