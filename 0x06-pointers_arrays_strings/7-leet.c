#include "main.h"
/**
 * leet - uppercase func
 * @str: str type variable
 * Description: function used to change uppercase
 * Return: success
 */
char *leet(char *str)
{
	char *ll = "aeotl";
	char *ul = "AEOTL";
	char r[] = {'4', '3', '0', '7', '1'};
	int i;

	char *p = str;

	while (*str != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == *(ll + i) || *str == *(ul + 1))
				*str = r[i];
		}
		str++;
	}
	return (p);
}
