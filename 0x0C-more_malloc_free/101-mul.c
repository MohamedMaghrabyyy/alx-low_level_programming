#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: numebr of passed arguments
 * @argv: array of pointers to arguments
 *
 * Return: (0) success
 */

int main(int argc, char *argv[])
{
	long double num1;
	long double num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!atoi(argv[1]) || !atoi(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%Lf\n", num1  * num2);
	return (0);
}
