#include <stdio.h>

/**
* main - print all arguments
* @argc: number of arguments
* @argv: array of arguments
* Return: all arguements it receives
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[i] || i < argc)
	{
		printf("%s", argv[i]);
		printf("\n");
		i++;
	}
	return (0);
}
