#include "main.h"
/**
 * _memset - function
 * @s: string variable
 * @b: character variable
 * @n: integer variable for size
 * Return:string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
