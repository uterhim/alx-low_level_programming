#include "main.h"
/**
 * print_line - shortest distance
 * @n: upper limit
 * Description: function used to display path
 * Return: the result interms of minus sign
 */
void print_line(int n)
{
	int i;
	
	for (i = 0; i < n; n++)
	{
		_putchar('_');
	}
	_putchar('$');
	_putchar('\n');
}
