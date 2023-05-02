#include"main.h"
#include"stdlib.h"
/**
 * argstostr - cocncrete all 
 * @ac: argument count
 * @av: poibter to array size
 * Return: return
 */
char *argstostr(int ac, char **av)
{
	int a, b, c;
	int size;
	char *argg;

	size = 0;
	c = 0;
	if (av == NULL || av == 0)
	{
		return (NULL);
	}
	a = 0;
	while (a < ac)
	{
		b = 0;
		while(av[a][b])
		{
			size++;
			b++;
		}
		size++;
		a++;
	}
	argg = malloc(sizeof(char) * (size + 1));
	if (argg == NULL)
		return (NULL);
	a = 0;
	while (a < ac)
	{
		b = 0;
		while (av[a][b])
		{
			argg[c] = av[a][b];
			b++;
			c++;
		}
		argg[c] = '\n';
		c++;
		a++;
	}
	argg[c] = '\0';
	return (argg);
