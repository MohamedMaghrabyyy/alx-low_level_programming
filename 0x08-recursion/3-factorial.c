#include <stdlib.h>
/**
 * factorial - calculates factorial of an integer using recursion
 * @n: number to get its factorial
 *
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
