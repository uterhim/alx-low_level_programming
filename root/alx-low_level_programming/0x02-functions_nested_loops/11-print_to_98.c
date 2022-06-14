#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print the number upto upper limit
 * @n: upper limit number
 * Description: function used to return the number from 0
 * Return: the number from 0 upto 98
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}

