#include <stdio.h>
/**
 * main - Entry main
 *
 * Return: 0
 */

int main(void)
{
	long arr[100] = {0};
	arr[0] = 1;
	arr[1] = 2;
	int i;
	long sum;

	for (i = 2; i <= 100; i++)
	{
		if (arr[i-1] <= 4000000)
		{
			arr[i] = arr[i - 1] + arr[i - 2];
		}
		else
		{
			break;
		}
	}
	for (i = 0; i<= 100; i++)
	{
		if (arr[i] != 0 && arr[i] % 2 == 0)
		{
			sum += arr[i];
		}
	}
	printf("%ld", sum);
	putchar('\n');
}
