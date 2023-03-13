#include "main.h"
#include <stdlib.h>

/**
* free_gridk - free a grid
* @grid: grid
* @height: height grid
*/
void free_gridk(int **grid, int height)
{
	int pos = 0;

	while (pos < height)
	{
		free(grid[pos]);
		pos++;
	}
	free(grid);
}

/**
*alloc_grid - create empty array
* @width: width array
* @height: height array
* Return: array
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (height <= 0 || width <= 0)
		return (NULL);

	grid = (int **) malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
			return (NULL);
	}
	/*free_gridk(array, height);*/
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
