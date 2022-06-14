 #include "main.h"
/**
 * print_times_table - display time table
 * @n: compute variable
 * Description: function used to display time table
 * Return: the correct answer
 */
void print_times_table(int n)
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
