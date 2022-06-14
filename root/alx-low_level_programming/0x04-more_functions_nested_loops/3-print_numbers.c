#include "main.h"
/**
 * print_numbers - The numbers speak for themselves
 * Description: function used to display number upto 9
 * Return: the correct result
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
