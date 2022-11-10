#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: input string
 * Return: lenght of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
