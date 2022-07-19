#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - function
 * @h: pointer variable
 * Return: d
 */
size_t print_listint(const listint_t *h)
{
	size_t nd = 0;

	if (!h)
		return (0);
	while (h)
	{
		nd = nd + 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nd);
}
