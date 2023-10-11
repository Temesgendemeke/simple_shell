#include "main.h"

void handle()
{
  display();
  char *input = NULL;
  size_t len = 0;

  getline(&input, &len, stdin);
  
  while (1)
  {
	  display();
	  if ( input[0] != '\n')
		  break;
  }
  
  readx(&input);

  free(input);
}

