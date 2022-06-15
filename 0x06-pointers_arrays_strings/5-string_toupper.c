#include "main.h"
/**
 * string_toupper - uppercase func
 * @c: string type variable
 * Description: function used to change uppercase
 * Return: success
 */
char *string_toupper(char *c)
{
	int a;

	for (a = 0; c[a] != 0; a++)
	{
		if (c[a] > 90 && c[a] != 10)
		{
			c[a] = c[a] - 32;
		}
	}
	return (c);
}
