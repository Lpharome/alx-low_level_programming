#include <stdlib.h>

/**
* str_concat - concatenate two strings.
* @s1: string
* @s2: string
* Return: pointer or null
*/
char *str_concat(char *s1, char *s2)
{
	int i, j, l1, l2;
	char *newtxt1, *newtxt2;

	l1 = 0;
	l2 = 0;
	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	newtxt1 = (char *) malloc(sizeof(char) * (l1 + l2 + 1));
	newtxt2 = newtxt1;
	if (newtxt1 == NULL)
		return (NULL);
	while (i < l1)
	{
		newtxt1[i] = s1[i];
		i++;
	}
	while (j <= l2 + 1)
	{
		newtxt1[i] = s2[j];
		j++, i++;
	}
	return (newtxt2);
}
