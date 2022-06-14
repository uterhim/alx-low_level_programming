#include "main.h"
/**
 * _islower - Check main
 * @c: An input character
 * Description: function uses _putchar function to print
 * Return: 1 if it is lowercase 0 if is uppercase
 */

int _islower(int c)
{
	int lc = 0;
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == c)
		{
			lc = 1;
		}
	}
	return (lc);
}

