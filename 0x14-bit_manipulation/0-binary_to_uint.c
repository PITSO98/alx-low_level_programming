#include "main.h"

/**
 * binary_to_uint - Entry Point
 * @b: const char
 * Return: 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int x = 0;

	if (b[x] == '\0')
		return (0);

	while ((b[x] == '0') || (b[x] == '1'))
	{
		number <<= 1;
		number += b[x] - '0';
		x++;
	}

	return (number);
}
