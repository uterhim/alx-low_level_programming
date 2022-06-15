#include "main.h"
/**
 * _puts - put function
 * @str: character to be displayed
 * Description: function used to display characters
 * Return: expected the correct answer
 */
void _puts(char *str)
{
	int i = 0;

	while (str != '\0')
	{
		_putchar(str);
		str++;
	}
}
