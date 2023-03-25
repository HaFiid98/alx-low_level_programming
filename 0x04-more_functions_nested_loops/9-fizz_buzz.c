#include"main.h"
#include<stdio.h>
/**
 *FizzBuzz - A function who print from 1 to 100
 *
 * Description - deosnt return anything
 *
 * Return: Does not return anything
 */

/*void FizzBuzz(void)*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
			putchar(' ');
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else
		{
			printf("%d",i);
			putchar(' ');
		}
	}
	return (0);
}

