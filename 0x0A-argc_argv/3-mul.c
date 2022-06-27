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
	int mul = 1;

	if (argc < 3 || argc > 3)
	{
		printf("Error");
		return (1);
	}
	else
	{
		mul = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%i\n", mul);
	}
	return (0);
}
