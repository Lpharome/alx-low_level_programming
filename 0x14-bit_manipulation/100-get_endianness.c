#include "main.h"
/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0 (Big Endian), 1 (Little Endian)
 */
int get_endianness(void)
{
	unsigned int value = 1;
	char *endia  = (char *)&value;

	if (*endia)
		return (1);

	return (0);
}
