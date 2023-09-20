#include "shell.h"
/**
 * _execute - Allows to execute command
 * @command: pointer containing command
 * @argv: argument vector
 * Return: nothing
 */
int _execute(char **command, char **argv)
{
	pid_t child_pid = fork();
	int status;

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	if (child_pid == 0)
	{
		if (execve(command[0], command, environ) == -1)
		{
			perror(argv[0]);
			free(command);
			exit(0);
		}
		else
		{
			waitpid(child_pid, &status, 0);
			free(command);
		};
	}
	return (WEXITSTATUS(status));
}
