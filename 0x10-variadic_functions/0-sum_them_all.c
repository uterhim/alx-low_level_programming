#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sums function
 * @n: number of arguments
 * @...: list of arguments
 * Return: sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result;
	va_list ar;

	if (n == 0)
		return (0);
	va_start(ar, n);
	for (i = result = 0; i < n; i++)
	{
		result += va_arg(ar, int);
	}
	va_end(ar);
	return (result);
}
