#include <stdio.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: nothing
 */


int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
