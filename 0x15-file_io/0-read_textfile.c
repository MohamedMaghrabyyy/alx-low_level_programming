#include "main.h"
/**
 * read_textfile - reads a text file and prints the letters
 * @filename: name of file
 * @letters: numbers of letters printed.
 * Return: numbers of letters printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_read, num_write;
	char *string;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	string = malloc(sizeof(char) * (letters));
	if (string == NULL)
		return (0);
	num_read = read(fd, string, letters);
	num_write = write(STDOUT_FILENO, string, num_read);

	close(fd);
	free(string);
	return (num_write);
}
