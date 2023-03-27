#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints second half of the string
 * @str: string to print half of
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = strlen(str);
	int j;

	if (i % 2 == 0)
	{
		for (j = (i / 2); j < i; j++)
		{
			putchar(str[j]);
		}
	}
	else
	{
		for (j = (i / 2) + 1; j < i; i++)
		{
			putchar(str[j]);
		}
	}
	putchar('\n');
}
