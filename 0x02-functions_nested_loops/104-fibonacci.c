#include <stdio.h>

/**
 * main - print the first 98 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i, boolean, boolean2;
	long int a1, a2, fn, fn2, a11, a22;

	a1 = 1;
	a2 = 2;
	boolean = boolean2 = 1;
	printf("%ld, %ld", a1, a2);
	for (i = 0; i < 96; i++)
	{
		if (boolean)
		{
			fn = a1 + a2;
			printf(", %ld", fn);
			a1 = a2;
			a2 = fn;
		}
		else
		{
			if (boolean2)
			{
				a11 = a1 % 1000000000;
				a22 = a2 % 1000000000;
				a1 = a1 / 1000000000;
				a2 = a2 / 1000000000;
				boolean2 = 0;
			}
			fn2 = (a11 + a22);
			fn = a1 + a2 + (fn2 / 1000000000);
			printf(", %ld", fn);
			printf("%ld", fn2 % 1000000000);
			a1 = a2;
			a11 = a22;
			a2 = fn;
			a22 = (fn2 % 1000000000);
		}
		if (a1 + a2 < 0 && boolean == 1)
			boolean = 0;
	}
	printf("\n");
	return (0);
}
