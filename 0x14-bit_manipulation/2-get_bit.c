#include "main.h"

/**
 * get_bit - gets bit at a given index
 * @n: passed unsigned int
 * @index: index to get
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int result;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 00000000000000000000000000000001;
	mask = mask << index;
	if ((n & mask) == 0)
		result = 0;
	else
		result = 1;
	return (result);
}
