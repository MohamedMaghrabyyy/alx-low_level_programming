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


	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(llType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
