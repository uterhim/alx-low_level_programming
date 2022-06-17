#include "main.h"
/**
 * print_number - function for print number
 * @n: represent number
 * Description: function used to print number
 * Return: success
 */
void print_number(int n)
{
	unsigned int nn = n;

	if (n < 0)
	{
		_putchar('-');
		nn = -nn;
	}

	if ((nn / 10) > 0)
		print_number(nn / 10);

	_putchar((nn % 10) + '0');
}
