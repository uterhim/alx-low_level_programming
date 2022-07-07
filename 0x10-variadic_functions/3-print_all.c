#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * p_char - function for character
 * @c: character to print
 */
void p_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * p_int - function for integers
 * @i: integers
 */
void p_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * p_float - function for float
 * @f: float
 */
void p_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * p_string - function for string
 * @s: string
 */
void p_string(va_list s)
{
	char *st;

	st = va_arg(s, char *);
	if (st == NULL)
		st = "nil";
	printf("%s", st);
}
/**
 * print_all - print items function
 * @format: number of arguments
 * @...: list of arguments
 * Return: print all arguments
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	char *separator;
	va_list ar;

	v_types valid_types[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string}
	};
	i = j = 0;
	separator = "";

	va_start(ar, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *valid_types[j].valid)
			{
				printf("%s", separator);
				valid_types[j].f(ar);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
