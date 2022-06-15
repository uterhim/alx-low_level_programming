#include "main.h"
/**
 * _strncpy - strncat func
 * @dest: variable for destination
 * @src: variable for source
 * @n: control variable
 * Description: function used to cat source to dest
 * Return: success
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	if (c < n)
	{
		for (; c < n; c++)

		dest[c] = '\0';
	}
	return (dest);
}
