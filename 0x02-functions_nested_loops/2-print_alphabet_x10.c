#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet ten times
 * no args
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for(i = 0; i <= 10 ; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
