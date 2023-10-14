#include "main.h"
/**
 *
 */
int main() 
{
 
 char *buff = NULL;
 size_t n = 0;
 int num;
 pid_t pid;
 int status;
 char **args;
 
while(1)
{
   
    display();
    num = getline(&buff, &n, stdin);
    if(num == -1)
    {
        break;
    }
    /*buff[strlen(buff) - 1] = '\0';*/
    args = tokenizer(&buff);
    if (strcmp(args[0], "exit") == 0)
    {
	    break;
    }
    pid = fork();
    if (pid == 0)
    {
	    execve(args[0], args, environ);
	    perror("./hsh");
	    exit(EXIT_FAILURE);
    }
    else if (pid < 0)
    {
	    perror("./hsh");
    }
    else
    {
	    wait(&status);
    }

}
free(buff);
    return 0;
}
