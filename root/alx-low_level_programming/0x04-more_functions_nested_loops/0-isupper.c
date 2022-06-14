#include "main.h"
/**
 * _isupper - Check character
 * @c: character to be computed
 * Description: function uses to check uppercase or lower
 * Return: 1 if uppercase  0 if is lwercase
 *
 */
int _isupper(int c)
{
	char u;
	int lt = 0;

	for (u = 'A'; u <= 'Z'; u++)
	{
		if (c == u)
		{
			lt = 1;
			break;
		}
	}
	return (lt);
}
