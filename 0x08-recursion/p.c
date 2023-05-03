#include"main.h"
#include<stdio.h>

void rev(char*s, char *b);
void rev(char *s, char *b)
{
	if (*s == '\0')
	{
		return;

	}
	b = s;
		 rev(s + 1,b);

  printf("%s", b);
}
int is_palindrome(char *s)
{
	char *b ="" ;
	rev (s + 1, b + 1);
	if ( *s == '\0')
	{
		return (1);
	}
	if (s != b)
	{
		return (0);
	}
	if (s == b)
	{
		return (1);
	}
	return (is_palindrome(s + 1));
}

