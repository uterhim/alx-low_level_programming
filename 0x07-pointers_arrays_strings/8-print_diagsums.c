#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function
 * @a: integer type data
 * @size: length of a
 * Return:string
 */
void print_diagsums(int *a, int size)
{
	int i, j, ld, rd, m1, m2;

	ld = 0;
	rd = 0;

	for (i = 0; i < size; i++)
	{
		m1 = (size + 1) * i;
		ld = ld + *(a + m1);
	}
	for (j = 1; j <= size; j++)
	{
		m2 = (size - 1) * j;
		rd = rd + *(a + m2);
	}
	printf("%d, %d\n", ld, rd);
}
