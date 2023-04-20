#include "variadic_functions.h"
/**
 * print_numbers - prints number separated by a separator
 * @separator: separates between numbers
 * @n: number of optionally passed arguments
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (separator)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d%s", va_arg(ap, int), separator);
		}
		printf("%d", va_arg(ap, int));
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
		}
	}
	printf("\n");
	va_end(ap);
}
