#include <stdio.h>
#include "main.h"
/**
 * times_table - print times table from zero to nine
 *
 * Return: print times table
 */
void times_table(void)
{
	int i;
	int j;
	int k;
	int l;
	int a;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			a = k % 10;
			l = k / 10;
			if (k < 10)
			{
				_putchar(' ');
				_putchar(k + '0');
				if (j == 9)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(l + '0');
				_putchar(a + '0');
				if (j == 9)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	printf("\n");
}
