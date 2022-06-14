#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char al='a';
	while(al<='z')
	{
		putchar(al);
		al++;
	}
	al='A';
	while(al<='Z')
	{
		putchar(al);
		al++;
	}

	putchar('\n');

	return (0);
}
