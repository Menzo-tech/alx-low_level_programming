#include "main.h"

/**
 * times_table - Print 9 times table
 * Return: no return
 */
void times_table(void)
{
	int a, b, pt;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			pt = a * b;
			_putchar(44);
			_putchar(32);
			if (pt <= 9)
			{
				_putchar(32);
				_putchar(pt + 48);
			}
			else
			{
				_putchar((pt / 10) + 48);
				_putchar((pt % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
