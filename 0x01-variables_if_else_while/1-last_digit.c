#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determine either greater than 5, is 0, or it is less than 6
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, t;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	t = n % 10;
	if (t > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, t);
	}
	else if (t == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, t);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and is not 0\n", n, t);
	}
	return (0);
}
	
