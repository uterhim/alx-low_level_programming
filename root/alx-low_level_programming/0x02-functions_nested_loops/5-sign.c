#include "main.h"
/**
 * print_sign - Evaluate the sign
 * @n: number to be eva;uated via it's sign
 * Description: function work whether the number
 * is posetive or zero or negative
 * Return: 1 if it is posetive, 0 if is zero and
 * -1 if it's negative
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
