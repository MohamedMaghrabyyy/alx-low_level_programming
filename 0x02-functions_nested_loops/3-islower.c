#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lower case letter
 * @c: character to check
 *
 * Return: on success return 1
 * on failure 0 is returned
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
