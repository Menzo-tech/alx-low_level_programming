#include "main.h"

/**
 * *_strchr - locate a character in a string
 * @s: string to search
 * @c: char of string
 * Return: pointer to firrst occurence of character c
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0

		for (; *(s + i) != '\0'; i++)
			if (*(s + i) == c)
				return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
