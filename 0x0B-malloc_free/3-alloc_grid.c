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
	int *arr;
	int i;
	int j;


	arr = malloc(sizeof(int) * (width * height + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	if (width <= 0 || height <= 1)
	{
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
