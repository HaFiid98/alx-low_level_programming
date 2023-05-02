#include<stdio.h>
#include<stdlib.h>
/**
 * main - programe kaydir moyenne dyal les elemeent
 *
 * Return: nonne
 *
 */
int main(void)
{
	int *t;
	int k;
	int moy, res, i;

	printf("plz enter the size of the tableu");
	scanf("%d", &k);
	t = malloc(sizeof(int) * k);
	for (i = 0;i < k; i++)
	{
		printf("ple enter the value dans le %d case de tab", i);
		scanf("%d", (t + i));
		moy = moy + *(t + i);
	}
	res = moy / k;
	printf("%d\n", res);
}
