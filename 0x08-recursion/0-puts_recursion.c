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

	if (s == '\0')
	{
		return;
	}
	putchar(s);
	_puts_recursion(s + 1);

}
