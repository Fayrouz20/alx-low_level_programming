#include<stdio.h>
#include<stdlib.h>
#include"3-calc.h"
/**
 *op_add -  returns the sum of a and b
 *@a : integer
 *@b : integer
 *Return: integer
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - returns the difference of a and b
 *@a : integer
 *@b : integer
 *Return: sub of integers
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - returns the multipilication of integers
 *@a : integer
 *@b : integer
 *Return: sub of integers
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - returns the devison of integers
 *@a : integer
 *@b : integer
 *Return: div  of integers
*/
int op_div(int a, int b)
{
	return (a * b);
}

/**
 *op_mod - returns the remaider of integers
 *@a : integer
 *@b : integer
 *Return: mod of integers
*/
int op_mod(int a, int b)
{
	return (a % b);
}
