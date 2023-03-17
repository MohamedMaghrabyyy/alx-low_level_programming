#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c;
	
	for (c = 48; c <= 57; c++)
		putchar(c);
	for (c = 97; c <= 100; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
