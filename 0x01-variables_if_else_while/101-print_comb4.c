#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int c;
	int n;
	int m;

	for (c = 48; c <= 57; c++)
	{
		for (n = c + 1; n <= 57; n++)
		{
			for (m = n + 1; m <= 57; m++)
			{
				putchar(c);
				putchar(n);
				putchar(m);
				if (c + n + m != 168)
				{
					putchar(44);
					putchar(32);
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
