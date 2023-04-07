#include <stdio.h>
#include <stdlib.h>
/** 
 * main - entry point
 * @argc: number of args
 * @argv: array of pointers to args
 *
 * Return: nothing
 */


int main(int argc, char *argv[])
{
	int test25 = 0;
	int test10 = 0;
	int test5 = 0;
	int test2 = 0;
	int test1 = 0;
	int k = atoi(argv[1]);
	int flag =0;

	if (argc != 2)
	{
		printf("Error\n");
		flag = 1;
	}
	else
	{
		if (k <= 0)
		{
			printf("%d\n", 0);
			return(0);
		}
		while (k >= 25)
		{
			k -= 25;
			test25++;
		}
		while (k >= 10)
		{
			k -= 10;
			test10++;
		}
		while (k >= 5)
		{
			k -= 5;
			test5++;
		}
		while (k >= 2)
		{
			k -= 2;
			test2++;
		}
		while (k >= 1)
		{
			k -= 1;
			test1++;
		}
		printf("%d\n", test25 + test10 + test5 + test2 + test1);

	}
	if (flag == 1)
	{
		return (1);
	}
	return (0);
}
