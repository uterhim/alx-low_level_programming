#include "main.h"
/**
 * print_chessboard - function
 * @a:string type
 * Return:chess
 */
void print_chessboard(char (*a)[8])
{
	int c, b;

	for (c = 0; c <= 7; c++)
	{
		for (b = 0; b <= 7; b++)
		{
			_putchar(a[c][b]);
		}
		_putchar('\n');
	}
}
