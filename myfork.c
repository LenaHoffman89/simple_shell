#include "shell.h"

/**
 * main - Entry point
 * Return: nothing
 */

int main(void)
{
	fork();
	printf("%u This is my pid\n", getpid());
	return (0);
}
