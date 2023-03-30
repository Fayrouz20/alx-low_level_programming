#include<stdio.h>
/**
 *reverse_array - reverses the content of an array of integers.
 *@a : array of integers
 *@n : length of array
 *return: void
*/
void reverse_array(int *a, int n)
{
	int i;
	int tab;

	for (i = 0; i < n ; i++)
	{
		tab = a[i];
		a[i] = a[n];
		a[n] = tab;
		n--;
	}
}
