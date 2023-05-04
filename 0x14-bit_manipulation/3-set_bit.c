#include "main.h"
/**
 * set_bit - sets the value a bit
 * @n: passed pointer to an int
 * @index: index of the element to set
 * Return:
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	int result;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 00000000000000000000000000000001;
	mask = mask << index;
	*n = *n | mask;

	return (1);
}
