#include "variadic_functions.h"
/**
 * print_strings - prints strings with a separator between them
 * @separator: separatess between strings
 * @n: number of optional strings
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *test;
	va_list ap;

	va_start(ap, n);
	if (separator)
	{
		for (i = 0; i < n; i++)
		{
			test = va_arg(ap, char *);
			if (i < n - 1)
			{
				if (test)
					printf("%s%s", test, separator);
				else
					printf("(nil)%s", separator);
				continue;
			}
			if (test == NULL)
				printf("(nil)");
			else
				printf("%s", test);
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			test = va_arg(ap, char *);
			if (test == NULL)
				printf("(nil)");
			else
				printf("%s", test);
		}
	}
	printf("\n");
	va_end(ap);
}
