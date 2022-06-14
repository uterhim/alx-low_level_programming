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
	char c='a';
	int d;
	for(d=0; d<10;d++)
	{
		putchar(d + '0');
	}
	while(c<='f')
	{
		
		putchar(c);
		
		c++;
	}

	putchar('\n');
	return (0);
}
