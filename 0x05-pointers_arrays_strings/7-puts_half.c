#include "main.h"

/**
 * puts_half - print half of a string.
 * @str: string to process.
 */
void puts_half(char *str)
{
        int I  = *(str + len)       
	int len = 0;

	while (str != '\0')
	{
		len++;
	}
	if (!(len % 2))
		len /= 2;
	else
		len = (len + 1) / 2;

	while (str != '\0')
	{
		_putchar(I);
		len++;
	}
	_putchar('\n');
}

