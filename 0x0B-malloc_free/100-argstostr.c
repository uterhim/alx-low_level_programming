#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - function
 * @ac: size
 * @av: string
 * Return: always success
 */
char *argstostr(int ac, char **av)
{
	int i, j, len, k;
	char *newStr;

	k = 0;
	len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; *(*(av + i) + j); j++)
			len++;
	newStr = malloc((len + ac + 1) * sizeof(char));
	if (newStr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++)
		{
			*(newStr + k) = *(*(av + i) + j);
			k++;
		}
		*(newStr + k) = '\n';
		k++;
	}
	*(newStr + k) = '\0';
	return (newStr);
}
