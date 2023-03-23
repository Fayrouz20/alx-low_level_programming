#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *positive_or_negative - "check the type of number"
 *@n: integer
 *Return: always 0
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}
