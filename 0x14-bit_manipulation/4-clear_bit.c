#include "main.h"
/**
 * clear_bit - sets a bit at a certain index to 0
 * @n: pointer to passed int
 * @index: location of bit
 * Return: 1 if successful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = ~(00000000000000000000000000000001 << index);
	*n = *n & mask;

	return (1);
}
