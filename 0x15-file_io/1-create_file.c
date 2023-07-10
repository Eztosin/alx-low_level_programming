#include "main.h"

/**
* create_file - A function that creates a file.
* @filename: name of file to create.
* @text_content: string to write to the file (NULL terminated).
* Return: 1 on success, -1 on failure.
*/

int create_file(const char *filename, char *text_content)
{
int fd, wrttn_bytes, txt_len;

if (filename == NULL)
return (-1);

if (text_content == NULL)
text_content = " ";

if (text_content != NULL)
{
for (txt_len = 0; text_content[txt_len] != '\0'; txt_len++)
;
}
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);


if (fd == -1)
return (-1);

if (text_content != NULL)
{
wrttn_bytes = write(fd, text_content, txt_len);
if (wrttn_bytes == -1)
close(fd);
return (-1);
}
close(fd);
return (1);
}
