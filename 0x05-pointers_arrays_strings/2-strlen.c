#include "main.h"
/**
 * _strlen - length of character
 * @s: character variable
 * Description: length
 * Return: correct
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
