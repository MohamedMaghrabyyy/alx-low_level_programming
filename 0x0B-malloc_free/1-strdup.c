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
	unsigned int size = strlen(str);
	char *arr;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
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
