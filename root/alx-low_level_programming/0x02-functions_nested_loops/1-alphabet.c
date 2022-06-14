#include "main.h"

/**
 * print_alphabet - use local variable
 * Description: Write a program to print a to z in lowercase
 * Return: Always sbuccess
 */
void print_alphabet(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}
	_putchar('\n');
}
