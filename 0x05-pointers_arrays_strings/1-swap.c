#include <stdio.h>
/**
 * swap_int - swap two integer pointers
 * @a: pointer to first integer
 * @b: pointer to second integer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}
