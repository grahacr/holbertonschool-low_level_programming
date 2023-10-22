#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free grid created in last function
 * @grid: double pointer array to free
 * @height: height of array
 * @i: used to loop
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
