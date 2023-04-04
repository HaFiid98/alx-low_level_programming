#include<stdlib.h>
#include<stdio.h>
int main(void)
{

        int i;
        int b=0;
        for (i=0;i<=9;i++)
        {
                for (b=i+1;b<=9;b++)
                {
                 printf("%d",i);
                printf("%d",b);
                }
        }
        putchar(',');
        putchar(' ' );
        putchar('\n');
return(0);

}
