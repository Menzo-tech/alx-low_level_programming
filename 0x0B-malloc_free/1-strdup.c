#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to a new string
 * @str: string
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int i, j;

	i = 0, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[j])
		j++;

	strout = malloc(sizeof(char) * (j + 1));

	if (strout == NULL)
		return (NULL);

	while ((strout[i] = str[i]) != '\0')
		i++;

	return (strout);
}
