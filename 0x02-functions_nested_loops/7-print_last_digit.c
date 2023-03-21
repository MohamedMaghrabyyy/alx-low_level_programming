#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: number to get last digit from
 *
 * Return: last digit is returned
 */

int print_last_digit(int n)
{
	int j = n % 10;
	int k = j * 10;

	return (k + j);
}
