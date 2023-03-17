#include <stdio.h>
/**
 * main - Entry pint
 *
 * Return: 0 (success)
 */
int main(void)
{
	int c;
	int n;

	for (c = 48; c <= 57; c++)
	{
		for (n = c + 1; n <= 57; n++)
		{
			putchar(c);
			putchar(n);
			if(c + n != 113)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	return (0);
}
