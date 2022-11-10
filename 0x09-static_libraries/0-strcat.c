#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int poll = 0, poll2 = 0;

	while (*(dest + poll) != '\0')
		poll++;

	while (poll2 >= 0)
	{
		dest[poll] = src[poll2];
		if (src[poll2] == '\0')
			break;
		poll++;
		poll2++;
	}
	return (dest);
}
