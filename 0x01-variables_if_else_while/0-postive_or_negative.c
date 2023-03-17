#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * @n - randomized value
 *
 * if - checks if number is +ve
 * else if - checks if number equals 0
 * else - number is negative
 * Return: 0 (success)

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is postive", n);
	else if(n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);

	return (0);
}
