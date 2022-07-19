#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - add node function
 * @head: pointer variable
 * Return: data
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
