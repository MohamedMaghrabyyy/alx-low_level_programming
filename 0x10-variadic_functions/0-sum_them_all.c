#include "variadic_functions.h"
/**
 * sum_them_all - sums values of all optional passed args
 * @n: number of optional passed args
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int num;
	int sum = 0;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		sum += num;
	}
	va_end(ap);
	return (sum);
}
