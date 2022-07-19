#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - add node function
 * @head: pointer variable
 * @index: variable at index
 * Return: data
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *loc;
	listint_t *temp = NULL;
	unsigned int i;

	if (!(head && *head))
		return (-1);
	loc = *head;

	if (index == 0)
	{
		temp = loc;
		*head = loc->next;
		free(temp);
		return (1);
	}
	else
		for (i = 0; i < (index - 1); i++)
		{
			if (loc->next)
				loc = loc->next;
			else
				return (-1);
		}
	temp = loc->next;
	loc->next = temp->next;
	free(temp);
	return (1);
}

