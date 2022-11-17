#include "variadic_functions.h"

/**
 * sum_them_all - return then sum of all parameters
 * @n: amount of the argument
 * Return: sum of its parameter
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0

		if (n == 0)
			return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
