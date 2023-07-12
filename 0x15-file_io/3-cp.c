#include "main.h"

void copy_file_from_to(const char *file_from, const char *file_to);

/**
* main - copies the content of a file to another.
* @argc: argument count.
* @argv: argument vector.
* Return: Always 0.
*/

int main(int argc, char **argv)
{
const char *file_from, *file_to;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
file_from = argv[1];
file_to = argv[2];

copy_file_from_to(file_from, file_to);

return (0);
}


/**
* copy_file_from_to -a function that copies the content of
* a file to another.
* @file_from: source file.
* @file_to: destination file.
* Return: Nothing.
*/

void copy_file_from_to(const char *file_from, const char *file_to)
{
int fd1, fd2;
ssize_t read_bytes, wrttn_bytes;
char buffer[BUFFER_CAP];

/* open and read the source file */
fd1 = open(file_from, O_RDONLY);
if (fd1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
close(fd1);
exit(98);
}

/* open the destination file to write */
fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
close(fd2);
exit(99);
}

/* copy from source file to destination file */
while ((read_bytes = read(fd1, buffer, BUFFER_CAP)) > 0)
{
wrttn_bytes = write(fd2, buffer, read_bytes);
if (wrttn_bytes == -1 || wrttn_bytes != read_bytes)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
close(fd1);
close(fd2);
exit(99);
}
}

/* close the file descriptor */
if ((close(fd1)) == -1 || (close(fd2)) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
exit(100);
}
close(fd1);
close(fd2);
}
