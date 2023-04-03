#include <stdio.h>
#include "main.h"
/**
 * *_memset - replaces first n places with char b
 * @s: array to be editied
 * @b: char to be inserted to first n places
 * @n: first n places to insert in
 *
 * Return: modified array
 */


char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char *start = s;

	for (i = 0; i < n; i++)
	{
		*start[i] = b;
	}
	return (start);
}
