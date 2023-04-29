#include"lists.h"
#include<stdio.h>
/**
 * pr - print text before the main executed
 */
void pr(void) __attribute__((constructor));
void pr(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
