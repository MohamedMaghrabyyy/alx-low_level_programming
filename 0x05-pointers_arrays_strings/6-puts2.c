#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints every other character in a string
 * @str: string to print
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i = strlen(str);
	int j;

	for (j = 0; j <= i; j += 2)
	{
		putchar(str[j]);
	}
	putchar('\n');
