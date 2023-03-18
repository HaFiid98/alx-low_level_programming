#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
        int nl;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	nl=n % 10;
	if (nl>5)
		printf("last digit of %d  is %d and  greater than 5\n",n,nl );
	else if (nl==0)
		printf("last digit of %d is %d and is 0\n",n,nl);
	else 
		printf ("Last digit of %d is %d and less than 6 and not 6\n",n,nl);
	return (0);
}
