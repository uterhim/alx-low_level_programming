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
	while(c<='z')
	{
		
		putchar(c);
		
		c++;
		
		if(c == 'e' || c == 'q'){
		c++;
		}
	}

	putchar('\n');
	return (0);
}
