#include "shell.h"
/**
 * main - prints the environment
 * @argc: argument count
 * @argv: argument vector
 * @env: double pointer to environment
 * Return: 0
 */
int main(__attribute__((unused)) int argc,
		__attribute__((unused)) char *argv[], char **env)
{
	unsigned int i = 0;

	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}
	return (0);
}
