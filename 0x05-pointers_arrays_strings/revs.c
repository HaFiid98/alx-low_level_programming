#include"main.h"
#include<stdio.h>
/**
 * revs - reverse a string
 *

 * @s : thes tring
 *
 * @reurn nothing
 */
void rev_string(char *s)
{

	int l = _strlen(s);
	int i;
	int j = 0;
	int k = l - 1;
	char b[600];
	char* r = s;
	
	while (k >= 0)
	{
		b[j] = s[k];

		j++;
		k--;
	}

	for ( i = 0 ; i < l ; i++)
	{
		*r = b[i];
		r++;
	}
}
