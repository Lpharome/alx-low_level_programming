#include <stdlib.h>

/**
*create_array - create a array with dynamic size
*@size: size
*@c: letter for fill the array
*
*Return: char pointer
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *tmpArray;
	int fail = 0;

	tmpArray = (char *) malloc(sizeof(char) * size);
	if (tmpArray == NULL)
		fail = 1;
	if (size == 0 || fail)
		return (NULL);
	while (i < size)
	{
		tmpArray[i] = c;
		i++;
	}
	return (tmpArray);
}
