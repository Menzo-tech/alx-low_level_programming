#include "main.h"

/**
 * *_memset - fills the memory area
 * @s: memory area to be filled
 * @b: number of bytes
 * @n: bytes
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
