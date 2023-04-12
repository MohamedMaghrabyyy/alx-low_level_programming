#include <stdlib.h>
/**
 * free_grid - frees memory allocated by a 2d array
 * @grid: 2d array passed as argument
 * @height: height of 2d array
 *
 * Return: nothing
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
		free(arr[i]);
	}
	free(grid);
}
