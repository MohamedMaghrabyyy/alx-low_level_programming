#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success(
 */
int main(void)
{
	int p;
	int q;
	for (p = 0;p <= 99; p++)
	{
		for (q = p + 1 ; q <= 98; q++)
		{
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');
			putchar(' ');
			if (p == 99 && q == 98)
				continue;
			putchar(',');
			putchar(' ');

		}
	}
	putchar(' ');
	return (0);
}
