#include<stdio.h>
#include<main.h>
/* -main prints _putchar, followed by a new line
 * Description : prints _putchar, followed by a new line
 * return : 0
 */
int main(void)
{
	int i;
	char pt[8]="-putchar";
	for (i=0 ; i <=8 ; i++ )
	{
		if( pt[i] != '\0' )
		putchar(pt[i]);
	}
	putchar('\n');
	return(0);
}
