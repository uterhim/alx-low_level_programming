#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function
 * @size: length of the variable
 * @c: string
 * Return: always success
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(ar + i) = c;
	}
	return (ar);
}
