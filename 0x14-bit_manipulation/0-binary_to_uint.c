#include "main.h"
/**
 * recursive_two - recursively multiplies two instead of using pow()
 * @num_of_iter: number of times required to multiply 2
 * Return: result
 */
int recursive_two(int num_of_iter)
{
	if (num_of_iter == 0)
		return (1);
	return (2 * recursive_two(num_of_iter - 1));
}
/**
 * binary_to_uint - converts a binary representation of a number to decimal
 * @b: passed array of characters
 * Return: converted decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int num;
	unsigned int result = 0;
	unsigned int size = 0;
	unsigned int digit;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	for (size; b[size]; size++)
		;
	if (size == 1)
	{
		result = atoi(b);
		return (result);
	}
	num = atoi(b);
	size = 0;
	while (num != 0)
	{
		digit = num % 10;
		result += digit * recursive_two(size);
		size++;
		num /= 10;
	}
	return (result);
}
