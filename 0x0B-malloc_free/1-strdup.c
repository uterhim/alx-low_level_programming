#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function
 * @str: string
 * Return: always success
 */
char *_strdup(char *str)
{
	int size, i;
	char *cp;
	size = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + size))
		size++;
	size++;
	cp = malloc(size * sizeof(char));
	if (cp == NULL)
		return (0);
	for (i = 0; i < size; i++)
		*(cp + i) = *(str + i);
	return (cp);
}
