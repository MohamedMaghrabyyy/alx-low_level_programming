#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints clock
 *
 */

void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			if (i < 10)
			{
				_putchar(0 + '0');
				_putchar(i + '0');
				_putchar(':');
			}
			else
			{
				k = i % 10;
				l = i / 10;
				_putchar(l + '0');
				_putchar(k + '0');
				_putchar(':');
			}
			if (j < 10)
			{
				_putchar(0 + '0');
				_putchar(j + '0');
				_putchar('\n');
			}
			else
			{
				k = j % 10;
				l = j / 10;
				_putchar(l + '0');
				_putchar(k + '0');
				_putchar('\n');
			}
		}
	}
