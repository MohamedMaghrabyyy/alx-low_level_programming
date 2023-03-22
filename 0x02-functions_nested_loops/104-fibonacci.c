#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int arr[98] = {0};
	int i;

	arr[0] = 1;
	arr[1] = 2;

	for (i = 2; i < 98; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	for (i = 0; i < 97; i++)
	{
		printf("%lu, ", arr[i]);
	}
	printf("%lu", arr[97]);
	printf("\n");

	return (0);
}
