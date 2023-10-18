#ifndef _SHELL_H_
#define _SHELL_H_


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <limits.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <stdarg.h>
#include <ctype.h>


void free_last_input(void);
void prompt(void);
void *get_line(void);
char *get_input(void);


void handle_sigquit(int sig);
void handle_sigint(int sig);
void handle_sigstp(int sig);
int shell_env(void);
int shell_clear(char **args);
void shell_help(void);
void shell_exit(char **args);
int check_for_builtin(char **args);
int execute_buitlin(char *cmd, char **args);
void shell_cd(char **args);
int shell_setenv(char **args);
int shell_unsetenv(char **args);


char **tokenize(char *str, const char *delim);
char **tokenize_input(char *input);
char *find_in_path(char *command);
int execute(char **args);
char *get_path(void);
char *_getenv(const char *name);
void _puts(char *str);
void _puterror(char *err);
void free_tokens(char **ptr);
void free_error(char **argv, char *arg);
void free_path(void);

void *_realloc(void *, unsigned int, unsigned int);
void *_calloc(unsigned int nmemb, unsigned int size);
int _putchar(char);
unsigned int _strspn(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
char *_strchr(char *s, char c);
int _strlen(const char *);
int _strcmp(const char *s1, const char *s2);
char *_strcpy(char *, char *);
char *_strcat(char *, const char *);
int _atoi(const char *str);
char *_memset(char *, char, unsigned int);
int _strncmp(const char *s1, const char *s2, size_t n);
char *_strdup(const char *);
char *_memcpy(char *dest, char *src, unsigned int n);

#endif
