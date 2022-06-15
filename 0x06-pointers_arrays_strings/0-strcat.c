#include "main.h"
/**
 * _strcat - strcat func
 * @dest: variable for destination
 * @src: variable for source
 * Description: function used to cat source to dest
 * Return: success
 */
char *_strcat(char *dest, char *src)
{
	int d = 0, s = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}

	dest[d] = '\0';
	return (dest);
}
