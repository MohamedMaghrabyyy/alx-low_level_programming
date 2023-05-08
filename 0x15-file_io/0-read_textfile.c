#include "main.h"
/**
 * read_textfile - reads a textfile and prints it to posix output
 * @filename: name of file to read from
 * @letters: number of letters in file
 * Return: number of letters in file
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char ch[letters];

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	int count = fread(&ch, sizeof(char), letters, fp);
	printf("%s", ch);
	fclose(fp);
	return (count);
}
