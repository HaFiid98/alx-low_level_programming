#include"3-calc.h"
/**
 * main - main
 * @argc: argulent count
 * @argv: argument content
 * Return: idk
 */
int main(int argc, char *argv[])
	{
		int a, b, c;
		int (*function)(int, int);

		if (argc != 4)
		{
			printf("Error\n");
			exit(98);
		}
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		function = get_op_func(argv[2]);
		if (!function)
		{
			printf("Error\n");
			exit(99);
		}
		if (((*argv[2] == '/') || (*argv[2] == '%')) && (b == 0))
		{
			printf("Error\n");
			exit(100);
		}
		c = function(a, b);
		printf("%d\n", c);
		return (0);
	}
