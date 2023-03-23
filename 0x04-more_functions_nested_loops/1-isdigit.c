#include <stdio.h>
/**
 * _isdigit - checks if entered ascii is a digit
 * @c: integer to be checked
 *
 * Return: 1 if digit
 * otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
