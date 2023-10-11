#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX_LINE_LENGTH 80
#define MAX_ARGS 10

int main(void)
{
	char line[MAX_LINE_LENGTH];
	char* args[MAX_ARGS];
	int status;

	while (1)
	{
		printf("shell> ");
		fgets(line, MAX_LINE_LENGTH, stdin);

		//tokenize the input
		int i = 0;
		while (args[i] != NULL)
		{
			i++;
			args[i] = strtok(NULL, " \n");
		}
		args[i] = NULL;

		// handle built-in commands
		if (strcmp(args[0], "cd") == 0) {
			chdir(args[1]);
			continue;
		}
		else if (strcmp(args[0], "exit") ==0
				}

		// create a child process and execute
		pid_t pid = fork();
		if (pid < 0) {
			perror("fork failed");
			exit(1);
		}
		else if (pid == 0) {
		// child process
		execvp("execvp failed");
		exit(1);
		}
		else {
		// parent process
		waitpid(pid, &status, 0);
		}
		}
		return 0;
