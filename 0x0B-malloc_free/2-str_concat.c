#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function
 * @s1: length of the variable
 * @s2: string
 * Return: always success
 */
char *str_concat(char *s1, char *s2)
{
	int ss1, ss2, i;
	char *concat;

	i = 0;
	ss1 = 0;
	ss2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + ss1))
		ss1++;
	while (*(s2 + ss2))
		ss2++;
	ss2++;

	concat = malloc((ss1 + ss2) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < ss1; i++)
		*(concat + i) = *(s1 + i);
	for (i = ss1; i < (ss1 + ss2); i++)
		*(concat + i) = *(s2 + i - ss1);

	return (concat);
}
