#include "3-calc.h"
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of pointers to passed arguments
 *
 * Return: 0 (terminates)
 */

int main(int argc, char **argv)
{
	int (*ptr)(int, int);
	int i, num1, num2;
	char o;

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	
	num1 = argv[1];
	num2 = argv[3];

	ptr = get_op_func(argv[2]);
	
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}


	i = ptr(num1, num2);
	
	printf("%d\n", i);
	
	return (0);
}

