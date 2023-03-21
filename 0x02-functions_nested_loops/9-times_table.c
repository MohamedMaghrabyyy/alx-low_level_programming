#include <stdio.h>
#include "main.h"
/**
 * times_table - print times table from zero to nine
 *
 * Return: print times table
 */
void times_table(void)
{
	int j;
	int k;
	for (i = 0; i < 10; i++)
	{
		for (j = 0 ; j <= 9; j++)
		{
			_putchar(j + '0');
			_putchar(',');
		}
		_putchar('\n');
	}
}
