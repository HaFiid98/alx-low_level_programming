#include"main.h"
/**
 * reverse_array - reverse aray of integer
 *
 * @a : si the array
 * @n : number of elements of the aray
 *
 * return : none bitch
 */
void reverse_array(int *a, int n)
{
	int i;
	int b[600];
	int k;
	int j;
	
	k = n-1;
	for (i = 0; i < n;i++)
		{
			b[i] = a[k];
			k--;
		}
	for (j = 0; j < n;j++)
	{
		a[j] = b[j];
	}
}

