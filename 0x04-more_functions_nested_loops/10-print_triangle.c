#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: length of base and height
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar(' ');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j >= 1; j--)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
