#include <stdlib.h>
/**
 * _strlen_recursion - returns the numebr of characters in a string
 * @s: string passed as argument
 *
 * Return: count
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
