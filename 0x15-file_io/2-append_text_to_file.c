#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: The name of the file
 * @text_content: The string to be added to the end of the file
 *
 * Return: On failure or if filename is NULL, return -1
 * If the file does not exist or the user lacks write permissions, return -1
 * On success, return 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
		int file_descriptor, bytes_written, text_length = 0;

		if (!filename)
		return (-1);

		file_descriptor = open(filename, O_WRONLY | O_APPEND);
		if (file_descriptor == -1)
		return (-1);

		if (text_content)
		{
		while (text_content[text_length])
		text_length++;
		bytes_written = write(file_descriptor, text_content, text_length);
		if (bytes_written == -1)
		{
		close(file_descriptor);
		return (-1);
		}
		}

		close(file_descriptor);
		return (1);
}
