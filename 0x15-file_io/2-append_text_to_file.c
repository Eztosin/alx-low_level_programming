#include "main.h"

/**
* append_text_to_file - A function that creates a file.
* @filename: name of file to append.
* @text_content: string to write to the file (NULL terminated).
* Return: 1 on success, -1 on failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
int fd, wrttn_bytes, txt_len = 0;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_CREAT | O_APPEND);

if (fd == -1)
return (-1);

if (text_content == NULL)
return (1);

if (text_content != NULL)
while (text_content[txt_len])
txt_len++;

wrttn_bytes = write(fd, text_content, txt_len);

if (wrttn_bytes == -1)
{
close(fd);
return (-1);
}

close(fd);
return (1);
}
