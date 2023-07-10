#include "main.h"

/**
* main - copies the content of a file to another.
* @argc: argument count.
* @argv: argumrnt vector.
* Return: Always 0.
*/

int main(int argc, char *argv[])
{

char ch[BUFFER_CAP];
const char *file_from, *file_to;
ssize_t bytes_read, wrttn_bytes;
int fd, fd1;
file_from = argv[1];
file_to = argv[2];

if (argc != 3)
{
dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to%d\n");
exit(97);
}

fd = open(file_from, O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from fd %s\n", file_from);
exit(98);
}

fd1 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (fd1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file_to %s\n", file_to);
close(fd1);
exit(99);
}

while ((bytes_read = read(fd, ch, BUFFER_CAP)) > 0)
{
wrttn_bytes = write(fd1, ch, bytes_read);
if (wrttn_bytes != bytes_read)
dprintf(STDERR_FILENO, "Error: Can't close %d\n", fd1);
close(fd);
close(fd1);
exit(100);
}
close(fd);
close(fd1);
return (0);
}
