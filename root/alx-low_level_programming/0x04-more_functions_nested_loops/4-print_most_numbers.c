#include "main.h"
/**
 * print_most_numbers - I believe in numbers and signs
 * Description: function used to display numbers
 * Return: the result of numbers
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
