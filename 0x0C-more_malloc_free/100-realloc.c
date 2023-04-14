#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_realloc - copies elements from allocated memory to a new allocated memory of different size
 * @ptr: old allocated memory
 * @old_size: size of ptr
 * @new_size: size of new allocated memory
 *
 * Return: new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *second;
	unsigned int i = 0;
	char *arr1;
	char *arr2;
	
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
	{
		return (ptr);
	}
	second = malloc(new_size);
	if (second == NULL)
	{
		return (NULL);
	}
	arr1 = ptr;
	arr2 = second;
	if (new_size > old_size)
	{
		while (i < old_size)
		{
			*(arr2 + i) = *(arr1 + i);
			i++;
		}
	}
	else
	{
		while (i < new_size)
		{
			*(arr2 + i) = *(arr1 + i);
			i++;
		}
	}
	return (second);
}
