#include "main.h"

int main() 
{
 
 char *buff = NULL;
 size_t n = 10;
while(1)
{
   
    display();
    getline(&buff, &n, stdin);
    buff[strlen(buff) - 1] = '\0';
    tokenizer(&buff);
}

free(buff);
    return 0;
}