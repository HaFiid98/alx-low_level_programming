#include <stdlib.h>
#include<stdio.h>
int main(void)
{
int i;
for (i=0;i<10;i++)
{ putchar(48+i);
putchar(',');
putchar(' ');
}
putchar('\n');
return(0);

}

