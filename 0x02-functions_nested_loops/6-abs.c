#include <stdio.h>
#include "main.h"
/**
 * _abs - returns absolute value of a number
 * @n: number for its absolute value to be found
 *
 * Return: absolute value
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}

}
