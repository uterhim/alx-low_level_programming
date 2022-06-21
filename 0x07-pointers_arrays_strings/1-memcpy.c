#include "main.h"
/**
 * _memset - function
 * @dest: string variable
 * @src: character variable
 * @n: integer variable for size
 * Return:string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
