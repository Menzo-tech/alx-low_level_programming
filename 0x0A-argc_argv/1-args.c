#include <stdio.h>

/**
 * main - print the number of argument passed to a program
 * @argc: number of argument
 * @argv: number of array
 * Return: Always 0 success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
