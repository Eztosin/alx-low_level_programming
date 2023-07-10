#include "main.h"

/**
* read_textfile - A function that reads a text file and prints it
* to POSIX standard output.
* @filename: pointer to the file being read.
* @letters:number of letters to be read and print.
* Return: texts written.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buff;
ssize_t bytes_read;
ssize_t wrttn_bytes;

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buff = malloc(letters + 1);
if (buff == NULL)
{
close(fd);
return (0);
}

bytes_read = read(fd, buff, letters);
if (bytes_read == -1)
{
close(fd);
free(buff);
return (0);
}

wrttn_bytes = write(STDOUT_FILENO, buff, bytes_read);
if (wrttn_bytes == -1 || wrttn_bytes != bytes_read)
{
close(fd);
free(buff);
return (0);
}
close(fd);
free(buff);

return (wrttn_bytes);
}
