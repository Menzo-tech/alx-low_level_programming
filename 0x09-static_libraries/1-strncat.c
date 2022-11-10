#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: amount of bytes used from source
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int poll = 0, poll2 = 0;

	while (dest[poll] != '\0')
		poll++;

	while (poll2 < n)
	{
		dest[poll] = src[poll2];
		if (src[poll2] == '\0')
			break;
		poll++;
		poll2++;
	}
	return (dest);
}
