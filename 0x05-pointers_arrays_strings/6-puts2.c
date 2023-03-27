#include <stdio.h>
/**
 * puts2 - prints every other character in a string
 * @str: string to print
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		if (str[i] == '\0')
		{
			break;
		}
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
