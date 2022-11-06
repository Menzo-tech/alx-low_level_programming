#include <stdio.h>

/**
 * main - print its name followed by a newline
 * @argc: number of command line argument
 * @argv: array that contains the program command line argument
 * Return: Always 0 success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
