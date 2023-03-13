#include <stdlib.h>

/**
*_strlen_recursionk - know length
*@s: char
*
*Return: size of string
*/
int _strlen_recursionk(char *s)
{
	if (!*s)
	{
		return (0);
	}
	else
	{
		return (_strlen_recursionk(s + 1) + 1);
	}
}

/**
* argstostr - concatenate string
* @ac: number arguments
* @av: array of strings
* Return: pointer
*/
char *argstostr(int ac, char **av)
{
	int i, j, k, newSize = 0;
	char *newStr;

	if (ac == 0 || !av)
		return (NULL);
	for (i = 0; i < ac; i++)
		newSize += _strlen_recursionk(av[i]);
	newStr = malloc(((newSize + ac + 1)) * sizeof(char));
	if (!newStr)
		return (NULL);
	for (i = 0; i < newSize;)
	{
		for (j = 0; j < ac; j++, i++)
		{
			for (k = 0; k < _strlen_recursionk(av[j]); k++, i++)
			{
				newStr[i] = av[j][k];
			}
			newStr[i] = '\n';
		}
	}
	newStr[i] = '\0';
	return (newStr);
}
