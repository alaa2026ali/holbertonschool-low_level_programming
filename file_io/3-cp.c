#include "main.h"
#include <stdio.h>

/**
 * print_error - prints error and exits
 * @code: exit code
 * @msg: message
 * @file: file name
 */
void print_error(int code, char *msg, char *file)
{
	dprintf(STDERR_FILENO, msg, file);
	exit(code);
}

/**
 * main - copies content from one file to another
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;
	ssize_t r, w;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		print_error(98, "Error: Can't read from file %s\n", av[1]);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		print_error(99, "Error: Can't write to %s\n", av[2]);

	while ((r = read(fd_from, buffer, 1024)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w != r)
			print_error(99, "Error: Can't write to %s\n", av[2]);
	}

	if (r == -1)
		print_error(98, "Error: Can't read from file %s\n", av[1]);

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(100);
	}

	return (0);
}
