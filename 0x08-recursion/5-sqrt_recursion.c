#include"main.h"
/**
 * _sqrt_recursion - eturns the natural square root of a number.
 *
 * @n : input
 *
 * @Return: eturns the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	int i = 2;
	if ((n / i) != i)
	{
		i++;
		 _sqrt_recursion(n);
	}
		return (i);
}

			

