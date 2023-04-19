#include<stdio.h>
/**
 *print_name - function that prints a name.
 *@name : string
 *@f : pinter to function
 *Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
