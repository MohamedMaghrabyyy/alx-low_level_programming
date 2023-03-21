#include <stdio.h>
#include "main.h"
/**
 * times_table - print times table from zero to nine
 *
 * Return: print times table
 */
void times_table(void)
{
	int i;
	int j;
	int k;
	int l;
	for (i = 0; i < 10; i++)
	{
		for (j = 0 ; j <= 8; j++)
		{
			k = j * i;
			if (i == 9)
			{

			
				if (k < 10)
				{
					_putchar(k + '10');
				}
				else
				{
					l = k / 10;
					_putchar(l + '0');
					_putchar(j + '0');
				}


			}
			else
			{
				if (k < 10)
                                {
                                        _putchar(k + '10');
                                        _putchar(',';
                                        _putchar(' ');
                                }
                                else
                                {
                                        l = k / 10;
                                        _putchar(l + '0');
                                        _putchar(j + '0');
                                        _putchar(',');
                                        _putchar(' ');
                                }	

			}

		}
		_putchar(
		_putchar('\n');
	}
}
