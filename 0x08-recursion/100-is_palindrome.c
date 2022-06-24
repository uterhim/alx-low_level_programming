#include "main.h"
/**
 * is_palindrome- function
 * @s: variable of in
 * Return: return either 0 or 1
 */
int is_palindrome(char *s)
{

	if (compute_palindrome(s, 0, length(s)) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * compute_palindrome - function to calculate prime
 * @s: variabli
 * @i: variable
 * @l: variable for length
 * Return: return either 1 or 0
 */
int compute_palindrome(char *s, int i, int l)
{
	if (*(s + i) == *(s + l - 1 - i) && i == (l / 2))
	{
		return (1);
	}
	else if (*(s + i) != *(s + l - 1 - i))
	{
		return (0);
	}
	else
	{
		return (compute_palindrome(s, i + 1, l));
	}
}
/**
 * length - function for string length
 * @s: string data
 * Return: return the length
 */
int length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + length(s + 1));
	}
}
