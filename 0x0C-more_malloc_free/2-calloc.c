#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_calloc - allocates memory and sets it to zero
 * @nmemb: length of allocated memory
 * @size: size of each element in allocated memory
 *
 * Return: allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *filler;
	int i = 0;
	
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	filler = ptr;
	while (i < (nmemb * size))
	{
		filler[i] = '\0';
		i++;
	}
	return (ptr);
}
