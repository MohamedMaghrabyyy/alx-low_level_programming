#include <string.h>
#include <stdlib.h>
/**
 * *str_concat - concatenate two arrays into one new array
 * @s1: first array to copy from
 * @s2: second array to copy from
 *
 * Return: concatenated array
 */


char *str_concat(char *s1, char *s2)
{
	unsigned int len1;
	unsigned int len2;
	char *arr;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
	{
		len1 = 0;
	}
	if (s2 == NULL)
	{
		len2 = 0;
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	arr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (i <= len1)
	{
		*(arr + i) = s1[i];
		i++;
	}
	while (j <= len2)
	{
		*(arr + i + j) = s2[j];
		j++;
	}
	return (arr);
}
