#include <stdio.h>
/**
 * print_name - prints name
 * @name: passed name
 * @f: function pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
