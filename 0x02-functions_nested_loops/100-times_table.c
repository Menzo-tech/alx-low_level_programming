#include "main.h"

/**
 * print_times_table - time table
 * @n:  range of times table
 * Return: 0
 */

void print_times_table(int n)
{
	int i, j, res;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;

				if (res < 10 && j > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (res >= 10 && j > 0 && res < 100)
				{
					_putchar(' ');
				}
				if (res <  10)
				{
					_putchar((res % 10) + 48);
				}
				else if (res >= 10 && res < 100)
				{
					 _putchar((res / 10) + 48);
					 _putchar((res % 10) + 48);
				}
				else if (res >= 100)
				{
					_putchar((res / 100) + 48);
					_putchar(((res / 10) % 10) + 48);
					_putchar((res % 10) + 48);
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
