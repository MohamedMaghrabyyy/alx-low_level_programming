#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>
/**
 * main - Entry point
 * @argc: numebr of passed arguments
 * @argv: array of pointers to arguments
 *
 * Return: (0) success
 */
int main(int argc, char* argv[])
{
	if (argc != 3) 
	{
		printf("Usage: %s <arg1> <arg2>\n", argv[0]);
		return 1;
	}
	mpz_t arg1, arg2, result;
	mpz_init(arg1);
	mpz_init(arg2);
	mpz_init(result);
	mpz_set_str(arg1, argv[1], 10);
	mpz_set_str(arg2, argv[2], 10);
	mpz_mul(result, arg1, arg2);
	
	gmp_printf("%Zd * %Zd = %Zd\n", arg1, arg2, result);
	
	mpz_clear(arg1);
	mpz_clear(arg2);
	mpz_clear(result);
	
	return 0;
}
