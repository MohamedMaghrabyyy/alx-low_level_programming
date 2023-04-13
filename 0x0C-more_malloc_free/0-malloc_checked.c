#include <stdlib.h>
/**
 * *malloc_checked - allocates memory
 * @b: size of allocated address
 *
 * Return: address of allocated memory
 */


void *malloc_checked(unsigned int b)
{
	void *a;
	
	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
