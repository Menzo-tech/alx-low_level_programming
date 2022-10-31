#include "main.h"
#include <stdio.h>

/**
 * printable_ASCII - determines if n is a printable ASCII char
 * @n: integer
 * Return: 1 if true, otherwise 0
 */
int printable_ASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * print_hexes - print hex value for string b in formatted form
 * @b: string to print
 * @start: starting position
 * @end: ending position
 */
void print_hexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf(" ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * print_ASCII - print ASCII value for string b
 * formatted to replace nonprintable char with '.'
 * @b: string to print
 * @start: starting position
 * @end: ending position
 */
void print_ASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!printable_ASCII(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - print a buffer
 * @b: string
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			print_hexes(b, start, end);
			print_ASCII(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}


