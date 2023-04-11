#include "main.h"
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints
 * @filename: file to be read
 * @letters: etters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileprop;
	ssize_t length1, length2;
	char *buf;

	if (filename == NULL)
		return (0);
	fileprop = open(filename, O_RDONLY);
	if (fileprop == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fileprop);
		return (0);
	}
	length1 = read(fileprop, buf, letters);
	close(fileprop);
	if (length1 == -1)
	{
		free(buf);
		return (0);
	}
	length2 = write(STDOUT_FILENO, buf, length1);
	free(buf);
	if (length1 != length2)
		return (0);
	return (length2);
}

