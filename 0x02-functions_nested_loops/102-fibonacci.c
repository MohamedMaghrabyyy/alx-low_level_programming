#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */


int main(void)
{
	long long arr[50] = {1, 2};
	int i;

	for (i = 2; i <= 49 ; i++)
	{
		arr[i] = arr[i - 2] +  arr[i - 1];
	}
	for (i = 0; i <= 48; i++)
	{
		printf("%lld, ", arr[i]);
	}
	printf("%lld", arr[49]);

	return (0);

}
