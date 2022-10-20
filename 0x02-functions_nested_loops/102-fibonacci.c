#include <stdio.h>

/**
 * main - Print the add of the fibonacci number
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	long int a1, a2, fn;

	a1 = 1;
	a2 = 2;
	printf("%ld, %ld", a1, a2);
	for (i = 0; i < 48; i++)
	{
		fn = a1 + a2;
		printf(", %ld", fn);
		a1 = a2;
		a2 = fn;
	}
	printf("\n");
	return (0);
}
