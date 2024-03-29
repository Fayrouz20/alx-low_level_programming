#include<stdio.h>
#include<stdlib.h>
#include"3-calc.h"
/**
 *main - the main programm
 *@argc : number of parameter
 *@argv : value
 *Return: always 0 (success)
*/
int main(int argc, char *argv[])
{
	int nb1, nb2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	nb1 = atoi(argv[1]);
	op = argv[2];
	nb2 = atoi(argv[3]);
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && nb2 == 0) ||
	    (*op == '%' && nb2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(nb1, nb2));
	return (0);
}

