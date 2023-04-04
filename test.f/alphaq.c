#include<stdlib.h>
#include<stdio.h>
int main(void)
{
int i=0;
char alpha[28]={"abcdefghijklmnopqrstuvwxyz"};
while (alpha[i] != '\0')
{ if (alpha[i] != 'q' && alpha[i] != 'e')
  putchar(alpha[i]);
i++;
}
putchar('\n');
return(0);

}
