#include "main.h"

/**
 * print_number - print number between 0 to 9
 * REturn: 0
 */
void Print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
