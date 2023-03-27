#include"main.h"
/**
 * print_number - function that prints an integer.
 *
 * @n : the integer we need
 *
 * return : does not reurn anything 
 *
 */
void print_number(int n)
{
	int p;
	int c=0;
	if (n == 0)
		_putchar('0');
	if (n < 0)
	{
		n = n *-1;
		_putchar('-');
	}
	while ( n > 0)
	{
		p = n % 10;
		_putchar(p + '0');
		n = n / 10;
		c++;
	}
	/*if ((n < 10) && (n > 0))
	{
		_putchar(n + '0');

	if ( n == 0 )
	{
		_putchar('0');
	}*/
}
	
