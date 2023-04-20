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

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}

	ptr = get_op_func(argv[2]);
	
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];
	
	if ((o == '/' || o == '%') && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	i = ptr(num1, num2);
	
	printf("%d\n", i);
	
	return (0);
}

