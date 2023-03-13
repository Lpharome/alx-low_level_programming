#include <stdlib.h>

/**
* _strdup - return a pointer with copy
*
* @str: string
* Return: pointer
*/
char *_strdup(char *str)
{
	char *copyStr;
	int a, b;

	a = 0;
	b = 0;
	if (str == NULL)
		return (NULL);
	while (str[a] != '\0')
		a++;
	copyStr = (char *)malloc((a + 1) * sizeof(char));
	if (copyStr == NULL)
	{
		return (NULL);
	}
	while (str[b] != '\0')
	{
		copyStr[b] = str[b];
		b++;
	}
	copyStr[b] = '\0';
	return (copyStr);
}
