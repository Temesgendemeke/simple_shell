#include "main.h"

void tokenizer(char **buff)
{
    char *str = *buff;
    char *del = " ";
    char *token = strtok(str, del);
    char **argx;
    int j = 0;

    while(token != NULL)
    {
        argx[j++] = token;
       
        token = strtok(NULL, del);
    }

     printf("%s\n", argx[0]);

 
}