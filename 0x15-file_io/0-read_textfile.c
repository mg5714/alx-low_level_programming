#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
*
* Return: actual number of letters read and printed, 0 on failure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd, rd, wr;
char *buf = malloc(leaters + 1);

if (filename == NULL || buf == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(buf);
return (0);
}
rd = read(fd, buf, letters);
wr = write(STDOUT_FILENO, buf, rd);
close(fd);
return (rd);
}
