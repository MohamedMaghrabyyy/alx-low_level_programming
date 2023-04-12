#include <string.h>
#include <stdlib.h>
/**
 * *_strdup - copies content of an array into a new array
 * @str: array to copy from
 *
 * Return: new array
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	unsigned int i;
	unsigned int j;
	unsigned int size;
	
	char *arr;


	i = 0;
	j = 0;
	size = strlen(str);
	arr = (char *)malloc(sizeof(char) * (size + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		arr[i] = str[j];
		i++;
		j++;
	}
	return (arr);
}
