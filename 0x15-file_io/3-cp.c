#include "main.h"
#include <stdio.h>

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file_to_write: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file_to_write)
{
	char *file_buffer;

	file_buffer = malloc(sizeof(char) * 1024);

	if (file_buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file_to_write);
		exit(99);
	}

	return (file_buffer);
}

/**
 * close_file - Closes file descriptors.
 * @descriptor: The file descriptor to be closed.
 */
void close_file(int descriptor)
{
	int file_close;

	file_close = close(descriptor);

	if (file_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", descriptor);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @arguments_count: The number of arguments supplied to the program.
 * @arguments: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If source file does not exist or cannot be read - exit code 98.
 *              If destination file cannot be created or written to - exit code 99.
 *              If source or destination file cannot be closed - exit code 100.
 */
int main(int arguments_count, char *arguments[])
{
	int source_file, destination_file, fr, fw;
	char *file_buffer;
	mode_t file_permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (arguments_count != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_buffer = create_buffer(arguments[2]);
	source_file = open(arguments[1], O_RDONLY);
	fr = read(source_file, file_buffer, 1024);
	destination_file = open(arguments[2], O_CREAT | O_WRONLY | O_TRUNC, file_permissions);

	do {
		if (source_file == -1 || fr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", arguments[1]);
			free(file_buffer);
			exit(98);
		}

		fw = write(destination_file, file_buffer, fr);
		if (destination_file == -1 || fw == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", arguments[2]);
			free(file_buffer);
			exit(99);
		}

		fr = read(source_file, file_buffer, 1024);
		destination_file = open(arguments[2], O_WRONLY | O_APPEND);

	} while (fr > 0);
	free(file_buffer);
	close_file(source_file);
	close_file(destination_file);
	return (0);
}
