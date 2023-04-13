#include <stdlib.h>
/**
 * *malloc_checked - allocates memory
 * @b: size of allocated address
 *
 * Return: nothing
 */


void *malloc_checked(unsigned int b)
{
	int *a;
	
	a = (int*)malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
}
