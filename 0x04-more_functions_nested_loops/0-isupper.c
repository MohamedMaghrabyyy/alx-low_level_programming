#include <stdio.h>
/**
 * _isupper - check if entered integer is ascii for an uppercase letter
 * @c: number to be checked
 *
 * Return: 1 if uppercase
 * otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
