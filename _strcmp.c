#include "main.h"

int _strcmp(const char *s1, const char *s2)
{
	int i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if(s1[i] == s2[i])
		{
                 return 0;
		}
		else if (s1[i] < s2[i])
		{

                 return -1;
		}
		else 
		{

                return 1;
		}
           
		i++;
	}



}
