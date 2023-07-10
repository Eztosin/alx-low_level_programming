#include "main.h"

/**
* create_file - A function that creates a file.
* @filename: name of file to create.
* @text_content: string to write to the file (NULL terminated).
* Return: 1 on success, -1 on failure.
*/

int create_file(const char *filename, char *text_content)
{
int fd, wrttn_bytes, txt_len = 0;

if (filename == NULL)
return (-1);
 
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

if (fd == -1)
return (-1);

if (text_content == NULL)
text_content = "";

if(text_content != NULL)
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
