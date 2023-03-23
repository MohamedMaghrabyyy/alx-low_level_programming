#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - print diagonal of length n
 * @n: length of diagonal
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = n; i >= 1; i--)
		{
			for (j = 0; j < n - i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
