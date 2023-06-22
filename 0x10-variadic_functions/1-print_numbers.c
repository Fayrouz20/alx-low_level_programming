#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *  print_numbers - function that prints numbers, followed by a new line.
 *  @separator : the sprin to be printed
 *  @n : the number of integers passed to the function
 *  @... : A variable number of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list myList;

	va_start(myList, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(myList, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(myList);
}
