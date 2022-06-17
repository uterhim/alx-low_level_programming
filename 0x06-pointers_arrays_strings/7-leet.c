#include "main.h"
/**
 * leet - uppercase func
 * @str: str type variable
 * Description: function used to perform leet op.
 * Return: return p
 */
char *leet(char *str)
{
	char *ll = "aeotlAEOTL";

	char r[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	int i;

	char *p = str;

	while (*str != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (*str == *(ll + i))

				*str = r[i];
		}
			str++;
	}
	return (p);
}
