#include "main.h"

int main() 
{
 
 char *buff = NULL;
 size_t n = 10;
 
while(1)
{
   
    display();
    int num = getline(&buff, &n, stdin);
    if(num == -1)
    {
        exit(0);
    }
    buff[strlen(buff) - 1] = '\0';
    tokenizer(&buff);

}

free(buff);
    return 0;
}