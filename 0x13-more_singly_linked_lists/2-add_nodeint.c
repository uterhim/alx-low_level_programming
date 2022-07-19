#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - add node function
 * @head: pointer variable
 * @n: int var
 * Return: print the added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
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
	new->next = loc;
	*head = new;
	return (*head);
}
