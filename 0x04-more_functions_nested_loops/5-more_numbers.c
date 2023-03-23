#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints numebrs from 0 to 14
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 1; i++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i == 1 && (k == 0 || k == 1 || k == 2 || k == 3 || k == 4))
				{
					_putchar(i + '0');
				}
				if (i == 1 && k == 5)
				{
					break;
				}
				_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}
