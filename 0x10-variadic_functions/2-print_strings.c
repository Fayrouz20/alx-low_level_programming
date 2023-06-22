#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - function that prints strings, followed by a new line.
 *@separator : he string to be printed between the strings
 *@n : the number of strings passed to the function
 *@... : the numbers of aruments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;
	va_list myList;

	va_start(myList, n);
	for (i = 0; i < n; i++)
	{
		ptr =  va_arg(myList, char*);
		if (ptr == NULL)
		printf("(nil)");
		else
		printf("%s", ptr);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(myList);
}
