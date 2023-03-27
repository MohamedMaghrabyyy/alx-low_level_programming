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

	while (i >= 0)
	{
		putchar(s[i]);
		i = i -1;
	
	putchar('\n');}
}
