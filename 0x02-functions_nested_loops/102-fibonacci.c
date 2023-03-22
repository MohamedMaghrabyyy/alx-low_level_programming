#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */


int main(void)
{
	int arr[50]={1, 2};
	int sum = 1;

	for (i = 2; i <= 49 ; i++)
	{
		arr[i] = arr[i - 2] +  arr[i - 1];
	}
	for (i = 1; i <= 48; i++)
	{
		printf("%d, ", arr[i]);
	}
	printf("%d", arr[49]);

	return (0);

}
