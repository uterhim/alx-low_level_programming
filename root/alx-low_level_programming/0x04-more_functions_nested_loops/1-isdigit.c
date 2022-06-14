#include "main.h"
/**
 * _isdigit - Check digit
 * @c: digit to be computed
 * Description: function used to check digit
 * Return: 1 if digit  0 if is other
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
