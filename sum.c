#include "shell.h"
/**
 * main - adds two numbers
 * @ac: argument count
 * @av: argument vector
 * Return: results of addition
 */
int main(int ac, char **av)
{
	int i, sum = 0;

	printf("ac: %d\n", ac);
	printf("av content is av[]\n");
	for (i = 1; i < ac; i++)
	{
		printf("av[%d]: %s\n", i, av[i]);
		sum += atoi(av[i]);
	}
	printf("sum is %d\n", sum);
	return (0);
}
