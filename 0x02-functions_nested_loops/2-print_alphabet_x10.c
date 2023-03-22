#include"main.h"
/**
 * print_alphabet_x10 - A function who print the alphabet in lowercase
 * 10 times followed by a new line.
 *
 * Description - Does not receive any parameters
 *
 * Return: Does not return anything
 */

void print_alphabet_x10(void)
{
	int i, rep;
	for (rep = 0 ; rep <= 10 ; rep++ )
	{
		for (i = 97 ; i <= 122 ; i++ )
		{
			_putchar(i);
		}
		_putchar('\n');

		  }
	
}
		
