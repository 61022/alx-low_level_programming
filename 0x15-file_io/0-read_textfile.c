#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - This reads a text file and prints it to POSIX stdio
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Retrun: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t nrd, nwr;
char *buf;
if (!filename)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * (letters));
if (!buf)
return (0);
nrd = read(fd, buf, letters);
nwr = write(STDOUT_FILENO, buf, nrd);
close(fd);
free(buf);
return (nwr);
}
