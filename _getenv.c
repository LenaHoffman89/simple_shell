#include "shell.h"
/**
 * main - entry point
 * Return: void
 */
int main(void)
{
	char *value = _getenv("HOME");

	printf("%s\n", value);
	return (0);
}
/**
 * _getenv - gets an environment variable
 * @name: name of variable
 * Return: NULL
 */
char *_getenv(const char *name)
{
	int i = 0;
	char *token;

	while (environ[i])
	{
		token = strtok(environ[i], "=");
		if (strcmp(token, name) == 0)
		{
			return (strtok(NULL, "="));
		}
		i++;
	}
	return (NULL);
}
