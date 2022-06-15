#include "main.h"
/**
 * swap_int - swap numbers
 * @a: pointer variable a
 * @b: pointer variable b
 * Description: function used to display numbers
 * Return: the result of numbers
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
