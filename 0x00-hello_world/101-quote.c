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
	const char *message; 
	message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	size_t len = strlen(message);

	write(1,message,len);

	return (1);
}
