#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -free 2 dimensialn grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int m;

	free(grid);
	for (m = 0; m <= height; m++)
	{
		free(grid[m]);
	}
}
