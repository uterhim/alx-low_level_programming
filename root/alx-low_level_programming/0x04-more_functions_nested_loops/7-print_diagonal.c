#include "main.h"
/**
 * print_diagonal - diagonal pattern
 * @n: number of size of diagonal
 * Description: function used to display pattern
 * Return: display diagonal
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
