#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: passed integer
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	unsigned int i;
	unsigned int x = 0;
	unsigned long int digit;
	unsigned long int array[32];

	if (n == 0)
		putchar(48);
	mask = 00000000000000000000000000000001;
	for (i = 31; i >= 0; i--)
	{
		digit = mask & n;
		array[i] = digit;
		n = n >> 1;
	}
	while (x <= 31)
	{
		if (array[x] == 0)
		{
			x++;
			continue;
		}
		else
			break;
	}
	while (x <= 31)
	{
		printf("%lu", array[x]);
		x++;
	}
}
