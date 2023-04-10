#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
