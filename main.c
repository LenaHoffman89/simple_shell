#include "shell.h"
/**
 * main - simple shell main function
 * @ac: argument count
 * @av: argument vector
 * Return: 0
 */
int main(int ac, char **av)
{
	char *line = NULL, **command = NULL;
	int status, i;
	(void) ac;

	while (1)
	{
		line = read_line();

		if (line == NULL)
		{
			if (isatty(STDIN_FILENO))
			write(1, "\n", 1);
			return (status);
		}
		printf("%s\n", line);
		free(line);

		command = tokenizer(line);
		if (!command)
			continue;
		for (i = 0; command[i]; i++)
		{
			printf("%s\n", command[i]);
			free(command[i]);
		}
		free(command);

		status = _execute(command, av);
	}
}
