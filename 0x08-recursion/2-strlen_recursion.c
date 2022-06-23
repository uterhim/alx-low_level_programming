#include "main.h"
/**
 * _strlen_recursion - function
 * @s: variable of string
 * Return: length of string printed
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
