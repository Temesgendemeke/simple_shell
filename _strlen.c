#include "main.h"

unsigned int  _strlen(char *s)
{
       int sum = 0;
       int i = 0;
	while(s[i] != '\0')
	{
         sum++;
	 i++;
	}
return sum;
}
