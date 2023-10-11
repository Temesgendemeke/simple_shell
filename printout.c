#include "main.h"

void printout(char *s)
{
	write(1, s, strlen(s));
}
