#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - add node function
 * @head: pointer variable
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
