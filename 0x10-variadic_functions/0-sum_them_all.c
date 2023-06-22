#include "variadic_functions.h"
#include<stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n : number of paramater
 * @... : A variable number of paramters to calculate the sum of
 * Return: the sum of all parametres
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int s, i;
	va_list countPtr;

	va_start(countPtr, n);
	s = 0;
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		s += va_arg(countPtr, int);
	va_end(countPtr);
	return (s);
}

