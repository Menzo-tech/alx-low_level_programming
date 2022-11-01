#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locate a character in a string
 * @s: string to search
 * @c: char of string
 * Return:  pointer to the first occurence of char
 * else NULL
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = (*s)++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return ('\0');
		}
	}
}
