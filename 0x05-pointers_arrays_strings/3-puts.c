#include "main.c"

/**
 * _puts - prints a string followed by  a newline
 * @str: input string
 * Return: no return
 */
void _puts(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i])
		{
			_putchar('\n');
			break;
		}
	}
	_putchar(str[i]);
	i++;
}
