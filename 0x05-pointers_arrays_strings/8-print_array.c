#include"main.h"
#include<stdio.h>
/**
 * print_array - function that prints n elements of an array
 *
 *  @a : is the array
 *
 *  @n : number of ints
 *
 *  return : nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
