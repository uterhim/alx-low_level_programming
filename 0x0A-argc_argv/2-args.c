#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: length of string
 * @argv: character or string t
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int c;

	while (c < argc)
	{
		printf("%s\n", *(argv + c));
		c++;
		(*argv)++;
	}
	return (0);
}
