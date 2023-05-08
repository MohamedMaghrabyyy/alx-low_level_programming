#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of args
 * @argv: pointer to array of args
 * Return: 0 (terminates)
 */
int main(int argc, char **argv)
{
	int fd1, fd2, r_1st, w_2nd, c_test, c_test2;
	char ch[1024];

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	r_1st = read(fd1, ch, 1024);
	if (r_1st == -1 || fd1 == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	w_2nd = write(fd2, ch, r_1st);
	if (w_2nd == -1 || fd2 == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	c_test = close(fd1);
	c_test2 = close(fd2);
	if (c_test == -1 || c_test2 == -1)
	{
		fprintf(stderr, "Error: Can't close fd %s\n", argv[2]);
		exit(100);
	}
	return (0);
}
