#include "main.h"
/**
 * rot13 - function for rot
 * @str: str type variable
 * Description: function used to change uppercase
 * Return: success
 */
char *rot13(char *str)
{
	int i;
	char *p = str;

	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*str != '\0')
	{
		i = 0;

		while (i < 54)
		{
			if (*str == input[i])
			{
				*str = output[i];
				break;
			}
			i++;
		}
		str++;
	}
	return (p);
}
