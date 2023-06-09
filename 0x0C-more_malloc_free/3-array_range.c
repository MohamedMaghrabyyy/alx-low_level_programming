#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *array_range - creates an array of integers
 * @min: minimum value in allocated range
 * @max: max value in allocated range
 *
 * Return: allocated array with required range
 */
int *array_range(int min, int max)
{
	int *a;
	int i = 0;
	int range = (max - min) + 1;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * (range));
	if (a == NULL)
	{
		return (NULL);
	}
	while (i < (range))
	{
		*(a + i) = min + i;
		i = i + 1;
	}
	return (a);
}
