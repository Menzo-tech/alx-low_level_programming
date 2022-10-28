#include "main.h"
#include <stdio.h>

/**
 * print_buffer - print a buffer 10 bytes a time
 * @b: buffer to be printed
 * @size: size of buffer
 * Return: no return
 */
void print_buffer(char *b, int size)
{
	int byte, index;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);
	}

	for (index = 0; index < 10; index++)
	{
		if ((index + byte) >= size)
			printf(" ");
		else
			print
