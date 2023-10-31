#include "main.h"

/**
 * read_textfile - Reads from a text file and writes
 * its contents to POSIX stdout.
 * @filename: The name of the file to read from.
 * @letters: The number of characters to read and print.
 *
 * Return: If the operation fails or filename is NULL - 0.
 * Otherwise, the actual number of characters read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_descriptor, bytes_read, bytes_written;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(file_descriptor, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);

	return (bytes_written);
}
