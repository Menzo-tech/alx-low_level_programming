#include "main.h"

/**
 * print_number - print an integer
 * @n: input integer
 * Return: no return
 */
void print_number(int n)
{
	unsigned int m, d, temp;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	d = m;
	temp = 1;

	while (d > 9)
	{
		d /= 10;
		temp *= 10;
	}

	for (; temp >= 1; temp /= 10)
	{
		_putchar(((m / count) % 10) + 48);
	}
}
