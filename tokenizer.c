#include "main.h"

void tokenizer(char **buff)
{
    char *temp = *buff;
    char del[] = " ";
    char *token = strtok(temp,del);
    char **argv;
    int i = 0;
    while(token != NULL)
    {
      
        argv[i++] = token;
        token = strtok(NULL, del);
      
    }

  char *argx = {NULL,NULL};

 

  
}