#include "shell.h"

/**
 * main - Parent pid
 *
 * Return: Always 0
 */
int main(void)
{
	pid_t p_pid;

	p_pid = getppid();
	printf("%u\n", p_pid);
	return (0);
}
