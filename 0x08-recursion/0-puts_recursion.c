#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _puts_recursion - prints a string
 * @s: string to print
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	int i = strlen(s);
	int j = 0;


	while (j < i)
	{
		_puts_recursion(s + j);
		j++;
	}
	if (j == i)
	{
		putchar('\n');
	}
}
