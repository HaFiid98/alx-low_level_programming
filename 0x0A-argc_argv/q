#include"main.h"
#include"stdlib.h"
/**
 * main - print how many cents to give a change
 *
 * @argv : uk
 * @argc : uk
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int a, i, b = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("0\n");
	}
	while (a > 0)
	{
		b = 1;
		while (a >= 25)
		{
			a = a - 25;
			i++;
		}
		while ((a >= 10) && (a < 25))
		{
			a = a - 10;
			i++;
		}
		while ((a >= 5) && (a < 10))
		{
			a = a - 5;
			i++;
		}
		while ((a >= 2) && (a < 5))
		{
			a = a - 2;
			i++;
		}
		if (a == 1)
		{
			i++;
			a--;
		}
	}
	if (b)
		printf("%d\n", i);
	return (0);
}
