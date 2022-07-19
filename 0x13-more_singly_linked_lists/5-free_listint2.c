#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - add node function
 * @head: pointer variable
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *fr;
	listint_t *loc;

	if (!head)
		return;
	loc = *head;
	while (loc)
	{
		fr = loc;
		loc = loc->next;
		free(fr);
	}
	*head = NULL;
}
