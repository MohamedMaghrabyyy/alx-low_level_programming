#include <stdio.h>
/**
 * *_memset - replace first n places with char b
 * @s: passed array
 * @b: char to be places in first n places
 * @n: first n places to insert in
 *
 * Return: array after modficitations
 */


char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char *start = s;

	for (i = 0; i < n; i++)
	{
		start[i] = b;
	}
	return (start);
}
