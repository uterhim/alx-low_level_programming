#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - function of pointer
 * @array: name variable
 * @size: length
 * @action: action variable
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = -1;

	if (array && action)
	{
		while (++i < size)
			action(array[i]);
	}
}
