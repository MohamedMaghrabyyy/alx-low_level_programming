#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * *string_nconcat - concatenate s1 and first n letters of s2
 * @s1: first string to fully return
 * @s2: second string to concat first n letters to the first string
 * @n: number of letters from s2 to concat to s1
 *
 * Return: Concatenated string 
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = strlen(s1);
	char *ptr;
	int i = 0;
	int j = 0;

	ptr = malloc(sizeof(char) * (a + n + 1));
	while (i < a)
	{
		*(ptr + i) = s1[i];
		i++;
	}
	while (j < n)
	{
		*(ptr + i + j) = s2[j];
		j++;
	}
	*(ptr + i + j + 1) = '\0';
	return (ptr);
}
