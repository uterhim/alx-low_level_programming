
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function
 * @grid: grid
 * @height: height
 * Return: always success
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);
}
