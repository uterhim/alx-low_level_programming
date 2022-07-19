#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - function
 * @h: pointer variable
 * Return: length
 */
size_t listint_len(const listint_t *h)
{
	size_t nd = 0;

	if (!h)
		return (0);
	while (h)
	{
		nd = nd + 1;
		h = h->next;
	}
	return (nd);
}
