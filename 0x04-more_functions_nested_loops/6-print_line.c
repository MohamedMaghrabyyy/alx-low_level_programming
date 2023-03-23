#include <stdio.h>
#include "main.h"

/**
 * print_line - print a line with a given length
 * @n: length of line
 *
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
