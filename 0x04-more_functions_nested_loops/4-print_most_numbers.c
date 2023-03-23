#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 & 4
 * @i: integer to be checked
 *
 * Return: no return
 */

void print_most_numbers(void)
{
	int i;
	
	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
