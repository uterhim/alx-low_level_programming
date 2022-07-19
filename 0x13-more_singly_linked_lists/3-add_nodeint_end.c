#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - add node function
 * @head: pointer variable
 * @n: int var
 * Return: print the added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *loc;

	if (!head)
		return (NULL);
	loc = *head;
	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}
	loc = *head;

	while (loc->next)
	{
		loc = loc->next;
	}
	loc->next = new;
	return (new);
}
