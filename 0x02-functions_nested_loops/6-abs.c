#include "main.h"

/**
 * _abs - absolute value of an integer
 *
 * @abs: parameter to modify
 *
 * Return: absolute value of parameter
 */
int _abs(int abs)
{
	if (abs >= 0)
	{
		return (abs);
	}
	else
	{
		return (abs * -1);
	}
	return (abs);
}
