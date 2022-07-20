#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - add node function
 * @h: pointer variable
 * Return: data
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nc = 0;
	listint_t *temp = NULL;

	if (!(h && *h))
		return (nc);
	while (*h)
	{
		nc++;

		if (*h > (*h)->next)
		{
			temp = *h;
			*h = (*h)->next;
			free(temp);
		}
		else
		{
			free(*h);
			*h = NULL;
		}
	}
	*h = NULL;
	return (nc);
}
