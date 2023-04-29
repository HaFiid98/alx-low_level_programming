#include"lists.h"
#include<stdio.h>
void pr() __attribute__((constructor));
void pr()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
