#include"main.h"
/**
 * main - print the add of numbers
 *
 * @argc : ll
 * @argv : uk
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a = 0;
	int i, j;
	int b = 0;

	if (argc <= 1)
	{
		printf("0\n");
	}
	for (j = 1; j < argc; j++)
	{
		if (!((*argv[j] >= 48) && (*argv[j] <= 57)))
		{
			printf("Error\n");
			return (1);
		}
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] != ' ')
		{
			a +=  _atoi(argv[i]);
			b = 1;
		}
	}
	if (b)
	{
		printf("%d\n", a);
	}
	return (0);
}
/**
 * _atoi - convert from char to int
 *
 * @s : input
 *
 * Return: res
 */
int _atoi(char *s)
{
		int i = 0;

		while (*s != '\0')
		{
			i = i * 10 + *s - '0';
			s++;
		}
		return (i);
}
