#include <stdio.h>

/**
* main - print name program + new line
* @argc: number of arguments
* @argv: array of arguments
*
* Return: name program
*/
int main(int argc, char *argv[])
{
	if (argc)
	{
	printf("%s", argv[0]);
	printf("\n");
	}
	return (0);
}
