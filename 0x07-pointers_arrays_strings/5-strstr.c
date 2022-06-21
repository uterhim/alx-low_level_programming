#include "main.h"
/**
 * _strstr - function
 * @haystack: string variable
 * @needle: character variable
 * Return:string
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle && compute(haystack, needle) == 1) || !*needle)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}

/**
 * compute - function
 * @a: string variable
 * @b: character variable
 * Return:string
 */
int compute(char *a, char *b)
{
	while (*b && *b == *a)
	{
		b++;
		a++;
	}
	if (*b == '\0')
		return (1);
	else
		return (0);
}
