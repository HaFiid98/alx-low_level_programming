#include"main.h"
/**
 * _abs - A function that prints the absolute value of and integer
 *
 * @n: is the number to check
 *
 * Return: 0
 */
int _abs(int b)
{
	if (b > 0)
	{ 
		return(b);
	}
	else if (b < 0)
	{
	  b=b * -1;
	  return(b);
	}
	else
	{
		return (0);
	}
}
