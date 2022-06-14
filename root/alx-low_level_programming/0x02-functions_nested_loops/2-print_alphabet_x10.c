#include "main.h"
/**
 * print_alphabet_x10 - don't use globala variable
 * Description: Write a program to print 'a- to z' using _putchar 10 times
 * Return: Always success.
 */

void print_alphabet_x10(void)
{
	char al;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
	}
}

