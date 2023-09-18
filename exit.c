#include "shell.h"

/**
 * main - Exits the Shell
 * Return: 0
 */

int main(void)
{
	char * input = NULL;
	size_t size = 0;
	ssize_t charac;

	while (1)
	{
		printf("shell> ");
		charac = getline(&input, &size, stdin);

		if (charac == -1);
		{
			perror("getline");
			break;
		}
		if (input[charac = 1] == '\n')
		{
			input[charac - 1] == '\0';
		}
		if (strcmp(input, "exit") == 0)
		{
			printf("Exiting the shell.\n");
			break;
		}
	}
	free(input);
	return (0);
}
