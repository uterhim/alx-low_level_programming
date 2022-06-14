#include "main.h"
/**
 * print_last_digit - Print last digit
 * @n: Represent the number
 * Description: function used to return the last digit number
 * Return: the last digit correcetly
 */
int print_last_digit(int n)
{
	int c;

	if (n < 0)
		c = -1 * (n % 10);
	else
		c = n % 10;
	_putchar((c % 10) + '0');
	return (c % 10);
}
