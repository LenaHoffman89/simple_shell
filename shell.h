#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024
#define DELIM " \t\n"

char *read_line(void);
char *_getenv(const char *name);
char *_strdup(const char *str);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char **tokenizer(char *line);
int _execute(char **command, char **argv);
extern char **environ;

#endif
