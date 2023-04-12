#include <stdlib.h>
/**
 * *create_array - creates an array of characters
 * @size: size of array
 * @c: first character in the array
 *
 * Return: returns the created array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;
	
	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}	
	while (i < size)
	{
		*(arr + i) = c;
		i++;
	}
	return (arr);
}
