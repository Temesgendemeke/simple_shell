#include "main.h"

void readx(char **s)
{
char *src = *s;
char *Ptr = malloc(sizeof(char) * strlen(src));

strcpy(Ptr,src);

char *tok;
tok = strtok(Ptr, " ");

int i = 0;
char **argv = NULL;

while (tok != NULL)
{
	argv[i++] = tok;
	tok = strtok(NULL, " ");
}
if (strcmp(argv[0], "betty"))
{
char *argx[] = {"/bin/betty",NULL};
execve("/bin/betty",argx,NULL);
}
}
