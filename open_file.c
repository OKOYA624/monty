#include "monty.h"
/**
  * open_file - Open a file
  * @fileName: pointer to file to be opened
  * Return: the opened file
  */
FILE *open_file(char *fileName)
{
	FILE *file;

	file = fopen(fileName, "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", fileName);
	}
	return (file);
}
