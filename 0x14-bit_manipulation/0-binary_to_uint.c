#include"main.h"
/**
 * binary_to_uint - b to int
 * @b: char
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int k = 0;
int i;

if (b == NULL)
	return (0);
for (i = 0; b[i]; i++)
{
	if (b[i] != '1' && b[i] != '0')
		return (0);
	k = 2 * k + (b[i] - '0');
}
return (k);
}
