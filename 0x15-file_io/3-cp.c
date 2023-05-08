#include "main.h"
/**
 * main - Entry point
 * @argc: number of args
 * @argc: pointer to array of args
 * Return: 0 (terminates)
 */
int main(int argc, char **argv)
{
	int fd1, fd2;
	int r_1st;
	int w_2nd;
	char *string;
	int c_test;
	
	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);

	if (fd1 == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	string = malloc(sizeof(char) * fd1);
	r_1st = read(fd1, string, 1024);

	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd2 == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	w_2nd = write(fd2, string, r_1st);
	c_test = close(fd1);
	if (c_test == -1)
	{
		fprintf(stderr, "Error: Can't close fd %s", argv[1]);
		exit(100);
	}
	c_test = close(fd2);
	if (c_test == -1)
	{
		fprintf(stderr, "Error: Can't close fd %s", argv[2]);
		exit(100);
	}
}
