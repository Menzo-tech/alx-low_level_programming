#include <stdio.h>

/**
 * main - print  all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, a, b, c, pt1, pt2;

	i = a = b = c = 48;
	while (c < 58)
	{
		b = 48;
		while (b < 58)
		{
			a = 48;
			while (a < 58)
			{
				i = 48;
				while (i < 58)
				{
					pt1 = (c * 10) + b;
					pt2 = (a * 10) + i;
					if (pt1 < pt2)
					{
						putchar(c);
						putchar(b);
						putchar(' ');
						putchar(a);
						putchar(i);
						if (c == 57 && b == 56 && a == 57 && i == 57)
							break;
						putchar(',');
						putchar(' ');
					}
					i++;
				}
				a++;
			}
			b++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
