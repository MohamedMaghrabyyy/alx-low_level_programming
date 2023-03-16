#include <stdio.h>
#include <string.h>
/**
 * main - main function
 *
 * @maxlen: limit
 * @message[]: array to take string
 * Return: 1
 */
int main(void)
{
	int maxlen=50;
	char message[]="and that piece of art is useful\" - Dora Korpar, 2015-10-19,";

	for (int i = 0; i < maxlen; i++)
	{
		if (message[i] == '\0')
		{
			putchar('\n');
			break;
		}
	
	else
		putchar(message[i]);
	}
		

	return (1);
}
