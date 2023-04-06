#include"main.h"
int qis(int n, int i);



	int qis(int n, int i)
{
	if (i > 9)
	{
		return (0);
	}

	i = 2;
	if ((n % i) == 0)
	{

		qis(n , i+1);
	}

}


int _sqrt_recursion(int n)
{
	int i = 1;
	if (i == n)
	{
		return (-1);
	}
	i++;
	if ((n / i) != i)
	{
		 _sqrt_recursion(n);
	}
	return (i);
}
