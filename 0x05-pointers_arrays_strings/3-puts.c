#include "main.h"

/**
 * _puts - prints a string followed by  a newline
 * @str: input string
 * Return: no return
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
