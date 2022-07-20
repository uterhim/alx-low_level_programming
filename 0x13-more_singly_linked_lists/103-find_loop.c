#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * find_listint_loop - loop node function
 * @head: pointer variable
 * Return: data
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p, *a;

	if (!head)
		return (NULL);
	p = head;
	a = head;

	while (a->next && a->next->next)
	{
		a = a->next->next;
		p = p->next;

		if (a == p)
		{
			p = head;

			while (p != a)
			{
				p = p->next;
				a = a->next;
			}
			return (a);
		}
	}
	return (NULL);
}
