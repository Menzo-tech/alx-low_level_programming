#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @s: input string
 * Return: the pointer to dest
 */
char *cap_string(char *s)
{
	int poll = 0, i;
	int seperators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if ((s[poll] > 97 && (s[poll]) <= 122))
		s[poll] = s[poll] - 32;
	poll++;
	while (s[poll] != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (s[poll] == seperators[i])
			{
				if ((s[poll + 1] >= 'a') && (s[poll + 1] <= 122))
					s[poll + 1] = s[poll + 1] - 32;
				break;
			}
		}
		poll++;
	}
	return (s);
}

