#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

#define MAX_ARGS 10
#define MAX_LINE_LENGTH 100

extern char **environ;
void printout(char *s);
void display();
char **tokenizer(char **buff);
void readx(char **s);


#endif
