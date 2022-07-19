#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - add node function
 * @head: pointer variable
 * @idx: variable at index
 * @n: node to be entered
 * Return: data
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *loc;
	unsigned int i;

	if (!head)
		return (NULL);
	loc = *head;
	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = loc;
		*head = new;
		return (*head);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (loc)
			loc = loc->next;
		else
			return (NULL);
	}
	new->next = loc->next;
	loc->next = new;
	return (new);
}
