#include <stdlib.h>
/**
 * _pow_recursion - calculate power of a number
 * @x: number to be raised
 * @y: power to be raised to
 *
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	if (x == 1)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
