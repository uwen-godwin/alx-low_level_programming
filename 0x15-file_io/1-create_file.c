#include "main.h"

/**
 * create_file - Creates a file with given content.
 * @filename: Pointer to the name of the file to create.
 * @text_content: Pointer to the content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
    int file_descriptor, bytes_written, text_length = 0;
    mode_t mode = S_IRUSR | S_IWUSR;

    if (filename == NULL)
        return (-1);

    file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
    if (file_descriptor == -1)
        return (-1);

    if (text_content != NULL) {
        while (text_content[text_length])
            text_length++;
        bytes_written = write(file_descriptor, text_content, text_length);
        if (bytes_written == -1) {
            close(file_descriptor);
            return (-1);
        }
    }

    close(file_descriptor);
    return (1);
}
