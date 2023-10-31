#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFSIZE 1024

/**
 * open_file - Opens a file with the specified flags and mode.
 *
 * @filename: The name of the file to open.
 * @flags: Flags for the open operation.
 * @mode: Permissions mode for the file.
 *
 * Return: The file descriptor on success.
 *         Exits with an error message and status code on failure.
 */

int open_file(const char *filename, int flags, int mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		dprintf(2, "Error: Can't open file %s\n", filename);
		exit(98);
	}
	return (fd);
}

/**
 * copy_file - Copies the content of one file to another.
 *
 * @fd_from: The file descriptor of the source file.
 * @fd_to: The file descriptor of the destination file.
 *
 * Exits with an error message and status code on read or write failure.
 */

void copy_file(int fd_from, int fd_to)
{
	char buffer[BUFSIZE];
	ssize_t read_bytes, write_bytes;

	while ((read_bytes = read(fd_from, buffer, BUFSIZE)) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes != read_bytes)
		{
			dprintf(2, "Error: Can't write to file\n");
			exit(99);
		}
	}

	if (read_bytes == -1)
	{
		dprintf(2, "Error: Can't read from file\n");
		exit(98);
	}
}

/**
 * main - Copies the content of one file to another.
 *
 * @ac: Number of arguments.
 * @av: Array of arguments.
 *
 * Return: 0 on success, 97 on incorrect argument count, 98 on read error,
 *         99 on write error, 100 on close error.
 */

int main(int ac, char **av)
{
	int fd_from, fd_to;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	fd_from = open_file(av[1], O_RDONLY, 0664);
	fd_to = open_file(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	copy_file(fd_from, fd_to);

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close file descriptor\n");
		exit(100);
	}

	return (0);
}

