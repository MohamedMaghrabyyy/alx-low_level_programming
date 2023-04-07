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
	int flag = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			printf("%d\n", sum);
		}
	}
	return (0);
}
