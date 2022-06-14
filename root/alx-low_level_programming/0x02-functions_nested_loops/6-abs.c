#include "main.h"
/**
 * _abs - Check absolute value
 * @c: Represent the absolute number
 * Description: function that check and return the
 * absolute valu of the number
 * Return: the correct value
 */
int _abs(int c)
{
	if (c > 0)
	{
		return (c);
	}
	else if (c == 0)
	{
		return (c);
	}
	else
	{
		return (-1 * c);
	}
}
