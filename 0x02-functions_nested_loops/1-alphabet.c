#include "main.h"
/**
 * print_alphabet - print all alphabet in small letter
 * Return: 0
 */

void print_alphabet(void)
{
	int k;

	for (k = 'a'; k <= 'z'; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
