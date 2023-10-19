#include "monty.h"
/**
  * close_file - close the file
  * @file: pointer to the file to be closed
  * Return: void
  */
void close_file(FILE *file)
{
	fclose(file);
}
