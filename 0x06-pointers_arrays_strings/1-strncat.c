#include "main.h"
/**
 * _strncat - strncat func
 * @dest: variable for destination
 * @src: variable for source
 * @n: control variable
 * Description: function used to cat source to dest
 * Return: success
 */
char *_strncat(char *dest, char *src, int n)
{
	int d = 0, s = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0' && s < n)
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
