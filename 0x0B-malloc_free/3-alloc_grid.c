#include <string.h>
#include <stdlib.h>
/**
 * **alloc_grid - make a 2d array and intialize it to zero
 * @width: number of rows
 * @height: number of columns
 *
 * Return: resulting array
 */


int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int j;


	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * (width));
	for (i = 0; i < width; i++)
	{
		arr[i] = malloc(sizeof(int) * height);
		if (arr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
