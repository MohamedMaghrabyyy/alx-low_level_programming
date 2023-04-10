#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: 0 (terminates)
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
