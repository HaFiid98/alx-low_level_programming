#include<stdlib.h>
#include<stdio.h>
int main(void)
{

        int i;
        int b=0;
        for (i=48;i<=57;i++)
        {
                for (b=i+1;b<=57;b++)
                {
                 putchar(i);
                putchar(b);
                if ( i !=57 && b!=58)
        putchar(',');
        putchar(' ' );
                }
        }
 putchar('\n');
        return(0);
}
