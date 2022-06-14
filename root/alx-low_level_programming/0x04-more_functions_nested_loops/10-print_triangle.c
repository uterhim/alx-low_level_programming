#include "main.h"
/**
 * print_triangle - triangle pattern
 * @size: number of size of triangle
 * Description: function used to display pattern
 * Return: display triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (j <= (size-i))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
