#include "main.h"
/**
 * _isalpha - Check alpha
 * @c: character to be computed
 * Description: function uses to check alpha
 * Return: 1 if it isalpha  0 if is other
 */
int _isalpha(int c)
{
	char l, u;
	int lt = 0;

	for (l = 'a'; l <= 'z'; l++)
	{
		for (u = 'A'; u <= 'Z'; u++)
		{
			if (c == l || c == u)
				lt = 1;
		}
	}
	return (lt);
}

