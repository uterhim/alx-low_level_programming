#include "main.h"
/**
 * times_table - display number 0 upto 9
 * Description: function used to display number from 0 to 9
 * Return: the correct answer
 */
void times_table(void)
{
	int i, j, r;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			r = (i * j);

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (r >= 10)
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			else if (r < 10 && j != 0)
			{
				_putchar(' ');
				_putchar((r % 10) + '0');
			}
			else
			{
				_putchar((r % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
