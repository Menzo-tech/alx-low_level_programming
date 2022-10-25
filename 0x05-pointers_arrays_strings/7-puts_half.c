#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input string
 * Return: no return
 */
void puts_half(char *str)
{
	int poll = 0, i;

	while (poll >= 0)
	{
		if (str[poll] == '\0')
			break;
		poll++;
	}

	if (poll % 2 == 1)
		i = poll / 2;
	else
		i = (poll - 1) / 2;

	for (i++; i < poll; i++)
		_putchar(str[i]);
	_putchar('\n');
}
