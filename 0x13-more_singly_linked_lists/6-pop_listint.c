#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - add node function
 * @head: pointer variable
 * Return: data
 */
int pop_listint(listint_t **head)
{
	listint_t *loc;
	int d = 0;

	if (!(*head))
		return (0);
	d = d + (*head)->n;
	loc = *head;
	*head = (*head)->next;
	free(loc);
	return (d);
}
