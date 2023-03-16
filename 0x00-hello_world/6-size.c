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


	printf("Size of a char: %zu bytes\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long: %zu bytes\n", sizeof(longType));
	printf("Size of a long long: %zu bytes\n", sizeof(llType));
	printf("SIze of a float: %zu bytes\n", sizeof(floatType));

	return (0);
}
