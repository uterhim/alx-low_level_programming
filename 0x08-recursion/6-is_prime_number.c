#include "main.h"
/**
 * is_prime_number - function
 * @n: variable of in
 * Return: return either 0 or 1
 */
int is_prime_number(int n)
{

	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (compute_prime(n, 2));
	}
}
/**
 * compute_prime - function to calculate prime
 * @x: variabli
 * @y: variable
 * Return: return square prime number
 */
int compute_prime(int x, int y)
{
	if (x % y  == 0)
	{
		return (0);
	}
	else if (y == (x - 1) && x % y != 0)
	{
		return (1);
	}
	else
	{
		return (compute_prime(x, y + 1));
	}
}
