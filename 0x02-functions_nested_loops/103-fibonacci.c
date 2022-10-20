#include <stdio.h>

/**
 * main - sum of fibonacci even value
 *
 * Return: Always 0
 */
int main(void)
{
	long int a1, a2, fn, afn;

	a1 = 1;
	a2 = 2;
	fn = afn = 0;
	while (fn <= 4000000)
	{
		fn = a1 + a2;
		a1 = a2;
		a2 = fn;
		if (a1 % 2 == 0)
		{
			afn += a1;
		}
	}
	printf("%ld\n", afn);
	return (0);
}
