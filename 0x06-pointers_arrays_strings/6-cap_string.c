#include "main.h"
/**
 * cap_string - uppercase func
 * @str: str type variable
 * Description: function used to change uppercase
 * Return: success
 */
char *cap_string(char *str)
{
	char sc[15] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 32;
		}
		for (j = 0; j < 14; j++)
			if (str[i] >= 97 && str[i] <= 122 && str[i - 1] == sc[j])
				str[i] = str[i] - 32;
	}
	return (str);
}
