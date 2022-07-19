#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - add node function
 * @head: pointer variable
 * Return: print the added node
 */
void free_listint(listint_t *head)
{
	listint_t *fr;

	if (!head)
		return;
	while (head)
	{
		fr = head;
		head = head->next;
		free(fr);
	}
}
