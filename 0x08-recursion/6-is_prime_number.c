#include<stdio.h>
/**
 *is_prime_number - function returns the value of x raised to the power of y.
 *@n : integer
 *Return: integer
*/
int is_prime_number(int n)
{

	if (n % (is_prime_number(n - 1)) == 0)
		return (1);
	else
		return (0);
}

