#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for a number according to a certain constraint
 * @array: passed array of integers
 * @size: size of array passed
 * @cmp: function pointer
 *
 * Return: index of number of it's founder or -1 if it's not
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
