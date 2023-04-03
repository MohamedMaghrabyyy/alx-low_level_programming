#include <stdio.h>
/**
 * *_strcat - appends one string to another
 * @dest - string to be extended
 * @src - string to be appended to the other
 *
 * Return: final appended string
 */

char *_strcat(char *dest, char *src)
{
	int i = strlen(dest);
	int j = strlen(src);
	int k = (i + j);
	int n;
	int m = 0;

	for (n = i; n < k; n++)
	{
		dest[n] = src[m];
		m = m + 1;
	}
	return (dest);
}
