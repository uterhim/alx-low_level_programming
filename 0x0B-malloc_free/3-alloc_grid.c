#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function
 * @width: width
 * @height: height
 * Return: always success
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **mat;

	if (width <= 0 || height <= 0)
		return (NULL);
	mat = (int **) malloc(height * sizeof(int *));
	if (mat == NULL)
	{
		free(mat);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(mat + i) = (int *) malloc(width * sizeof(int));
		if (*(mat + i) == NULL)
		{
			for (j = 0; j < i; j++)
				free(*(mat + j));
			free(mat);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			*(*(mat + i) + j) = 0;
	return (mat);
}
