#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints a string in reverese
 * @s: string to be reveresed
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = strlen(s);

	while (i-1 >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
