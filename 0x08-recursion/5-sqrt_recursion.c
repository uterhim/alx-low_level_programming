#include "main.h"
/**
 * _sqrt_recursion - function
 * @n: variable of int
 * Return: return squreroot valu
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (compute_sqrt(n, 1));
	}
}
/**
 * compute_sqrt - function to calculate sqrt
 * @x: variabli
 * @y: variablj
 * Return: return square root result
 */
int compute_sqrt(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	else
	{
		return (compute_sqrt(x, y + 1));
	}
}
