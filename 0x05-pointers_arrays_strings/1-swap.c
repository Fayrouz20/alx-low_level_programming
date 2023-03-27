#include<stdio.h>
/**
 * swap_int - swap values
 * @a : first value
 * @b : second value
 * return: nothing
*/
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

