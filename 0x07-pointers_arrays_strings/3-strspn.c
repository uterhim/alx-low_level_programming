#include "main.h"
/**
 * _strspn - function
 * @s: string variable
 * @accept: character variable
 * Return:string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; *(s + a); a++)
	{
		for (b = 0; *(accept + b); b++)
		{
			if (*(s + a) == *(accept + b))
				break;
		}
		if (*(accept + b) == '\0')
			break;
	}
	return (a);
}
