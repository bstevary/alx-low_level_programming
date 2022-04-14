#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional(width * height) array of integers
 * @width: width of array
 * @height: height of array
 * Each element of the grid should be initialized to 0
 *
 * Return: pointer to the created array
 * If width or height is 0 or negative, return NULL
 * The function should return NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* if width or height is 0 or negative, return NULL */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* create an array of pointers */
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);

			free(grid);
			return (NULL);
		}
	}

	/* initialize all values in the array to 0 */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
