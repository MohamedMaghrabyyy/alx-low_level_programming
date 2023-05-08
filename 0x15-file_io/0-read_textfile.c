#include "main.h"
/**
 * read_textfile - reads a text file & prints it to posix output
 * @filename: name of file to read from
 * @letters: number of letters in the file
 * Return: number of letters the function could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp = filename;
	char ch[letters];
	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	printf("%s", fgets(ch, letters, fp));
	fclose(fp);
}
