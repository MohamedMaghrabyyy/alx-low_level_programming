#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - main function
 * @message - pointer to char array
 * @len - length of array
 *
 * Return: Terminates main function
 */
int main(void)
{
	write(2, "and that piece of art is useful\" -Dora Korpar, 2015-10-19\n",59);
	return (1);
}
