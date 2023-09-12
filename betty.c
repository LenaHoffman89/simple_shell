#include "shell.h"

/**
 * main - entry point
 * Description: writes Hello Betty to standard output
 * Return: 0
 */
int main(void)
{
	write(1, "Hello Betty\n", 14);
	return (0);
}
