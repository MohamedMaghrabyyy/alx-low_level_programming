#include <stdio.h>

/**
 * main - Entry point
 * Return: terminates
 */

int main(void)
{
	int i;
	int k;


	k = 1;
	printf("%d",k);
	for (i = 2; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
