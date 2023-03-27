#include <stdio.h>
#include <string.h>
/**
 * print_array - print first n elements of an array
 * @a: passed array
 * @n: length of passed array
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;
	if (n == 1)
	{
		printf("%d", a[0]);
	}
	else
	{
		for (i = 0; i <= n - 2; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d", a[n - 1]);
	}
	putchar('\n');
}
