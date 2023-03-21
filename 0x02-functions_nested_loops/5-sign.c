#include <stdio.h>
#include "main.h"
/**
 * print_sign - checks for sign of number
 * @n: number to be checked
 *
 * Return: 1 if postive
 * 0 if zero
 * -1 if negative
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
}
