#include "main.h"

/**
 * rev_string - reverse a string
 * @s:String to reverse
 * Return: 0
 */
void rev_string(char *s)
{
	int j = 0;
	int i;
	char ss;

	while (s[j] != '\0')
		j++;
	for (i = 0; i < j; i++)
	{
		j--;
		ss = s{i};
		s[i] = s[j];
		s[j] = ss;
	}
}
