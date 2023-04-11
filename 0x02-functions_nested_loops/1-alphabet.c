#include<stdio.h>
#include"man.h"
/**
 * print_alphabet : function
 * 
*/
void print_alphabet(void)
{
	char alphabet;
	for(alphabet = 97; alphabet <= 122; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
}
