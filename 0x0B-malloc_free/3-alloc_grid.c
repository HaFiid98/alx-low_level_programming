#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - prints a grid of integers
 * @width: width of the grid
 *
 * @height: height of the grid *
 * Return: null if failure
 */
int **alloc_grid(int width, int height)
{
	int k;
	int z;
	int i;
	int j;
	int **m = (int **)malloc(sizeof(int *) * height);
	
	if (m == NULL)
	{
		return (0);
	}
	if ((width <= 0) && (height <= 0))
	{
		return (NULL);
	}
	for (k = 0; k < height; k++)
	{
		m[k] = (int *)malloc(sizeof(int) * width);
	if (m[k] == NULL)
	{
		free(m);
		for (z = 0; z <= k; z++)
		{
			free(m[z]);
		}

	}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < height; j++)
		{
			m[i][j] = 0;
		}
	}
	
	/**if (m == NULL)
	{
		for (z = 0; z < height; z++)
        {
                free(m[z]);
        }
	free(m);*/
	
return (m);
}
