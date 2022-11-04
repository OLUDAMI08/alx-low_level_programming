#include <stdio.h>

/**
 * read_textfile- function that reads a text file and prints it to the POSIX standard output.
 * @filename: file name
 * @letters: number of letters it should read and print
 * Return:actual number of letters it could read and printmain
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	size_t n, k, fd;

	fd = open("filename", O_RDONLY);
	if (!filename)
		return (0);
	beffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	n = read(fd, buffer, letters);
	if (filename == NULL)
		return (0);
	k = write(1, buffer, n);
	if (write == -1)
		return (0);
	free(buffer);
	close(fd);
	return (k);	
}
