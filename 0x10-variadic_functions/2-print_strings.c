#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - sums function
 * @separator: separtor
 * @n: number of arguments
 * @...: list of arguments
 * Return: sum of all arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ar;

	va_start(ar, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ar, char *);
		(str) ? printf("%s", str) : printf("nil");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ar);
}
