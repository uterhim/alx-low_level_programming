#include "function_pointers.h"
/**
 * int_index - function of pointer
 * @array: name variable
 * @size:length
 * @cmp: pointer func
 * Return: 0 for success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = -1;

	if (size <= 0 || !(array) || !(cmp))
		return (-1);
	while (++a < size)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
