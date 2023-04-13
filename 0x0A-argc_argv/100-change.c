#include<stdio.h>
#include<stdlib.h>
/**
 *main - prints the minimum number of coins.
 *@argc : number of arguments
 *@argv : value of arguments
 *Return: always 0 (success)
*/
int main(int argc, char *argv[])
{
	int cents[] = {25, 10, 5, 2, 1};
	int i, j, min;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	min = 0;
	if (i < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && i >= 0; j++)
	{
		while (i >= cents[j])
		{
			min++;
			i -= cents[j];
		}
	}
	printf("%d\n", min);
	return (0);
}
