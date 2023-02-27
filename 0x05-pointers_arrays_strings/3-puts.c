#include "main.h"
#include <string.h>
/**
 * _puts - minic the stdio version of puts
 * @str: the value to process to the stdout.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	       
	}
	_putchar('\n');
}
