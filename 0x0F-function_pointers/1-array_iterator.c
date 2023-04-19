#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - ierates through an array and performs functions on t
 * @array: passed array
 * @size: size of passed array
 * @action: function pointer
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (int i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
