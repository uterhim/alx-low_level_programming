#include "main.h"
/**
 * more_numbers - more numbers
 * Description: function used to display numbers
 * Return: the result of numbers
 */
void more_numbers(void)
{
	int c, n;

	for (c = 0; c <= 9; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			_putchar('1');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
