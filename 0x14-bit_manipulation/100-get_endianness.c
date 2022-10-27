#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int i;

	i = 1;
	if (*(char *)&i == 1)
		return (1);
	else
		return (0);
}
