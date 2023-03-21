#include<stdio.h>


/*This algorithm print the combination of 3 numbers without 
 * printing dublicates of the same number or even with piveotation
 * like 01 and 10 */

int main(void) 
{ 
	int first;
	int second;
	int third;

	for (first = 48; first <= 57; first++)
	{ 
		for (second=first+1;second<=57;second++)
		{
			for (third = second+1; third <= 57; third++)
			{
				putchar(first);
				putchar(second);
				putchar(third);

				if (!(first == 55 && second == 56 && third == 57))
				{
					putchar(',');
				        putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
	
}			
