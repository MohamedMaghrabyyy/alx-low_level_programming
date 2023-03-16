#include <stdio.h>
/**
 * main - Main function
 *
 * Return: 0 means function success
 */
int main(void)
{
	int intType;
	float floatType;
	char charType;
	long longType;
	long long llType;


	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of long: %zu bytes\n", sizeof(longType));
	printf("SIze of long long: %zu bytes\n", sizeof(llType));

	return (0);
}
