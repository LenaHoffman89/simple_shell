#include "shell.h"
/**
 * tokenizer - entry point
 * @line: pointer
 * Return: nothing
 */
char **tokenizer(char *line)
{
	char *token = NULL, *tmp = NULL;
	char **command = NULL;
	int i = 0, j = 0;

	if (!line)
		return (NULL);
	tmp = _strdup(line);
	token = strtok(tmp, DELIM);

	if (token == NULL)
		return (NULL);
	while (token)
	{
		i++;
		token = strtok(NULL, DELIM);
	}
	free(tmp);

	command = malloc(sizeof(char *) * (i + 1));
	if (!command)
	{
		free(line);
		return (NULL);
	}
	token = strtok(line, DELIM);
	while (token)
	{
		command[j] = _strdup(token);
		token = strtok(NULL, DELIM);
		j++;
	}
	free(line);
	command[i] = NULL;
	return (command);
}
