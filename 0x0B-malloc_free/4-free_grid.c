#include <stdlib.h>

/**
* free_grid - free a grid
* @grid: grid
* @height: height grid
* Return: Void
*/
void free_grid(int **grid, int height)
{
	int pos = 0;

	while (pos < height)
	{
		free(grid[pos]);
		pos++;
	}
	free(grid);
}
