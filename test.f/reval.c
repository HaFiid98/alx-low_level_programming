#include<stdlib.h>
#include<stdio.h>
int main (void)
{
	char alpha[26]="abcdfghijklmnoprstuvwxyz";
	int i=26;

	while ( i >= 0 )
	{
		putchar(alpha[i]);
	--i;
        
	}
	putchar('\n');
	return(0);

}
