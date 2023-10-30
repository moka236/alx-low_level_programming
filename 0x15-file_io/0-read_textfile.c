#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fu;
	ssize_t nd, nr;
	char *bf;

	if (!filename)
		return (0);

	fu = open(filename, O_RDONLY);

	if (fu == -1)
		return (0);

	bf = malloc(sizeof(char) * (letters));
	if (!bf)
		return (0);

	nd = read(fu, bf, letters);
	nr = write(STDOUT_FILENO, bf, nd);

	close(fu);

	free(bf);

	return (nr);
}
