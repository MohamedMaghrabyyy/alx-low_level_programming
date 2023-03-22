#include <stdio.h>
/**
 * main - Entry main
 *
 * Return: 0
 */

int main(void)
{
	long arr[100] = {0};
	int i;
	long sum;
	int count;

	arr[0] = 1;
	arr[1] = 2;

	for (i = 2; i <= 100; i++)
	{
		if (arr[i - 1] <= 4000000)
		{
			arr[i] = arr[i - 1] + arr[i - 2];
			count++:
		}
		else
		{
			break;
		}
	}
	for (i = 0; i <= count; i++)
	{
		if (arr[i] != 0 && arr[i] % 2 == 0)
		{
			sum += arr[i];
		}
	}
	printf("%ld", sum);
	putchar('\n');

	return (0);
}
