#include "monty.h"
/**
  * free_list - free the stack memory
  * @head: pointer of the first node
  * Return: void
  */
void free_list(stack_t **head)
{
	stack_t *temp = NULL;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
