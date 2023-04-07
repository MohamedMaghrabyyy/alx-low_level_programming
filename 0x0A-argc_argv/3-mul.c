#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argc: array of pointers to arguments
 *
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}
