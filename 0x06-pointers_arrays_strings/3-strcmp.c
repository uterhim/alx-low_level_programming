#include "main.h"
/**
 * _strcmp - strncat func
 * @s1: variable for destination
 * @s2: variable for source
 * Description: function used to compare source to dest
 * Return: success
 */
int _strcmp(char *s1, char *s2)
{
	int d, s;

	s = 0;

	for (d = 0; s1[d] != '\0' && s2[d] != '\0'; d++)
	{
		if (s1[d] != s2[d])
		{
			s = s1[d] - s2[d];
			break;
		}
	}
	return (s);
}
