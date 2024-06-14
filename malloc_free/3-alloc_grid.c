#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * **alloc_grid - returns pointer
 * @width: width of array
 * @height: height of array
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int **alloc;
	int i = 0;
	int j;

	if (width == 0)
	return (NULL);
	if (height == 0)
	return (NULL);

	alloc = (int **) malloc(sizeof(int *) * height);
	if (alloc != NULL)
	{
		for (; i < height; i++)
		{
			alloc[i] = (int *) malloc(sizeof(int) * width);
			if (alloc[i] != NULL)
			{
				for (j = 0; j < width; j++)
				alloc[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(alloc[i]);
					i--;
				}
				free(alloc);
				return (NULL);
			}
		}
		return (alloc);
				}
				else
				{
					return (NULL);
				}
}
