#include "main.h"

char **tokenizer(char **buff)
{
	char *str = *buff;
	char *del = " \n\t\r";
	char *token = strtok(str, del);
	static char *argx[10000] = {NULL};
	int j = 0;

	while(token != NULL)
	{
		argx[j] = token;
		token = strtok(NULL, del);
		j++;
	}
	argx[j] = NULL;

	return (argx);




}
