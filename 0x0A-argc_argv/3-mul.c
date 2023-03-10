#include <stdio.h>
#include <stdlib.h>

/**
* main - multiply two numbers
* @argc: number of arguments
* @argv: int a, int b
*
* Return: r = a * b
*/
int main(int argc, char *argv[])
{
	int r;

	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		r = a * b;
		printf("%d", r);
		printf("\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
