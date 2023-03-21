#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 * 
 */
void print_alphabet()
{
	int i;
	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	putchar('\n');

	return;
}
