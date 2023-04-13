#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - prints a grid of integers
 * @width: width of the grid
 *
 * @height: height of the grid
 *
 * Return: null if failure
 */
int **alloc_grid(int width, int height)
{
	int k;
	int i;
	int j;
	int **m = (int **)malloc(sizeof(int *) * width);
	
	if ((width == 0) && (height == 0))
		{
			return (NULL);
		}
	for (k = 0; k < width; k++)
	{
		m[k] = (int *)malloc(sizeof(int *) * height);
	}
	if ((width < 0) || (height < 0))
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			m[i][j] = 0;
		}
	}
	if (m == NULL)
	{
		return (NULL);
	}
	return (m);
}
