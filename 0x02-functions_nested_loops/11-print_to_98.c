#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: number to print from it to 98
 *
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 97)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
			}
			n = n - 1;
		}
		_putchar('\n');
	}
	else if (n < 98)
	{
		while (n < 99)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
			}
			n = n + 1;
		}
		_putchar('\n');
	}
	else
	{
		printf("%d", 98);
		_putchar('\n');
	}
}
