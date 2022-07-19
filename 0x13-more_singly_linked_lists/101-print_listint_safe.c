#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - add node function
 * @head: pointer variable
 * Return: data
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nc = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		nc += 1;
		if (head > head->next)
		{
			head = head->next;
		}
		else
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (nc);
}
