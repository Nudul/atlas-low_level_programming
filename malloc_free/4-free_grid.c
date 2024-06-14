#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * free_grid - what it sounds like
 * @height: height of array
 * @grid: memory for grid
 * Return: not needed
 */
void free_grid(int **grid, int height)
{

int i;

for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}

	free(grid);
}
