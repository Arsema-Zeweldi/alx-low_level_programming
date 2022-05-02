#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: file name
 * @letters: number of letters
 * Return: number of letters
 */
ssize_t read_textfile (const char *filename, size_t letters)
{
	int fd;
	ssize_t read_c, write_c;
	char *buf;

	if (filename == NULL)
		return (0);
	
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	read_c = read(fd, buf, letters);
	if (read_c == -1)
		return (0);

	write_c = write(STDOUT_FILENO, buf, read_c);

	if (write_c == -1 || read_c != write_c)
		return (0);

	free(buf);

	close(fd);

	return (write_c);
}
