#include "shell.h"

/**
 * main - Allow to execute command
 *
 * Return: Always 0
 */

int main(void)
{
	char *argv[] = {"ls", "-l", NULL};

	char *envv[] = {"NULL"};

	printf("Before execve\n");
	if (execve("/usr/bin/ls", argv, envv) == -1)
	{
		perror("Error:");
	}
	printf("After execve\n");
	return (0);
}
