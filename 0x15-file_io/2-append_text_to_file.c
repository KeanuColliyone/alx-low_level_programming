#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 *
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to append to the file.
 *
 * Return: 1 on success and -1 on failure.
 * If filename is NULL, return -1.
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists, and -1 if the file does not exist or if you
 * do not have the required permissions to write the file.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_status;
	mode_t permissions = S_IRUSR | S_IWUSR;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND, permissions);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		write_status = write(fd, text_content, strlen(text_content));
		if (write_status == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

