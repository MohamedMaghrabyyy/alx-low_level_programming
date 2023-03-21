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
			printf("%d, ", n);
			n = n - 1;
		}
	}
	else if (n <= 98)
	{
		while (n < 99)
		{
			printf("%d, ", n);
			n = n + 1;
		}
	}
	else
	{
		printf("%d", 98);
	}
}
