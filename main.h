#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

#define MAX_ARGS 10
#define MAX_LINE_LENGTH 100
#define BUFFER_SIZE 1024
extern char **environ;
void printout(char *s);
void display(void);
char **tokenizer(char *buff);
void readx(char **s);
<<<<<<< HEAD
=======
int _strcmp(const char *s1, const char *s2);
unsigned int  _strlen(char *s);
>>>>>>> 99df6c07229b170ee9d4e138d81349359196ad17

#endif
