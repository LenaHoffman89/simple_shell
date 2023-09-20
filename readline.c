#include "shell.h"
/**
 * read_line - reads a line
 * Return: nothing
 */
char *read_line(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t n;

	write(1, "$ ", 2);
	n = getline(&line, &len, stdin);

	if (n == -1)
	{
		free(line);
		return (NULL);
	}
	return (line);
}
