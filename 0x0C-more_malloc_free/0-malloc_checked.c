#include <stdlib.h>
/**
 * *malloc_checked - allocates memory
 * @b: size of allocated address
 *
 * Return: nothing
 */


void *malloc_checked(unsigned int b)
{
	void *a;
	
	a = (void*)malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
