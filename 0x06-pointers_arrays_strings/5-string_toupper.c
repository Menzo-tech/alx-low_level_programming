#include "main.h"
/**
 * string_toupper - changes all lowercase to uppercase string
 * @s: input string
 * Return: the pointer to dest
 */
char *string_toupper(char *s)
{
	int poll = 0;

	while (s[poll] != '\0')
	{
		if ((s[poll] >= 'a') && (s[poll] < 'z'))
			s[poll] = s[poll] - 32;
		poll++;
	}

	return (s);
}
