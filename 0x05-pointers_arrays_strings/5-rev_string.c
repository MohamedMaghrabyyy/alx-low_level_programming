#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverse a string
 * @s: string to be reversed
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = strlen(s) - 1;
	char temp[i];
	int j;
	int k;

	for (j = 0; j <= i; j++)
	{
		temp[j] = s[i - j];
	}
	for (k = 0; k <= i; k++)
	{
		s[k] = temp[k];
	}

}
