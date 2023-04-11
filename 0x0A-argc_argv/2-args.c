#include<stdio.h>
/**
 *main - program that prints its name, followed by a new line.
 *@argc : integer
 *@argv : array if character
 *Return: always 0
*/
int main(int argc, char *argv[])
{
	int count;

	count = 0;
	if (argc > 1)
	{
		for (count = 0 ; count < argc ; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
