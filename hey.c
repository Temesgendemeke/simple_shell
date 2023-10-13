#include "main.h"
/**
   * main - Entry point
   *
   * Description: 'prints string'
   * Return: Always 0 (Success)
*/
int main(void)
{
	char *str = "Hey ya!";

	write(1, str, strlen(str));
	return (0);
}
