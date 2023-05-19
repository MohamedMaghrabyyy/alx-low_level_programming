#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strcmp - compares to strings
 * @s1: first string
 * @s2: second string
 * Return: 0 (if s1 & s2 are the same)
 * postive number (s1 is longer)
 * negative number (s2 is longer)
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, k, bigger;
	int flag = 0;

	i = strlen(s1);
	j = strlen(s2);

	if (i > j)
	{
		bigger = i - j;
		return (bigger);
	}
	else if (j > i)
	{
		bigger = i - j;
		return (bigger);
	}
	else
		return (0);
	
}
