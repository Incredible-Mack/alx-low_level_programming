#include "main.h"
#include <stdio.h>

/**
 * error_file - checking if files can be opened.
 * @file_path: file_path.
 * @file_des: file_des.
 * @argv: arguments .
 * Return: void.
 */
void error_file(int file_path, int file_des, char *argv[])
{
	if (file_path == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_des == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - checking the code for Holberton School students.
 * @argc: arguments num.
 * @argv: arguments vector.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int file_path, file_des, err_log_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_path file_des");
		exit(97);
	}

	file_path = open(argv[1], O_RDONLY);
	file_des = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_path, file_des, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_path, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(file_des, buf, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_log_close = close(file_path);
	if (err_log_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_path);
		exit(100);
	}

	err_log_close = close(file_des);
	if (err_log_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_path);
		exit(100);
	}
	return (0);
}

